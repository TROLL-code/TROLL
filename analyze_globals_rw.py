import subprocess
import os
from collections import defaultdict
from clang.cindex import Index, Config, CursorKind, TypeKind

# ============
# Auto-detect libclang via Homebrew
# ============
llvm_prefix = subprocess.check_output(["brew", "--prefix", "llvm"]).decode().strip()
libclang_path = f"{llvm_prefix}/lib/libclang.dylib"
Config.set_library_file(libclang_path)

SOURCE = "mainTROLL4.0.cpp"  # adjust path as necessary

# ============
# Data structures
# ============
global_vars = {}  # name → cursor
reads = defaultdict(set)  # function → set(globals)
writes = defaultdict(set)  # function → set(globals)
current_function = None


# ============
# Determine if a cursor represents a write
# ============
def is_write_reference(node):
    """
    Determines if this DeclRefExpr is a write, i.e. appears on LHS of assignment
    or is the operand of a unary operator like ++ or --.
    """
    parent = node.semantic_parent
    if not parent:
        return False

    # Assignment: LHS is a write
    if parent.kind == CursorKind.BINARY_OPERATOR:
        tokens = list(parent.get_tokens())
        tok_text = " ".join(t.spelling for t in tokens)
        if "=" in tok_text and not "==" in tok_text:
            # Identify left-hand side token sequence
            if node.extent.start.offset >= tokens[0].extent.start.offset:
                return True

    # Unary operator ++var or var++
    if parent.kind == CursorKind.UNARY_OPERATOR:
        for t in parent.get_tokens():
            if t.spelling in ("++", "--"):
                return True

    return False


# ============
# Recursively traverse AST
# ============
def analyze(node):
    global current_function

    # Entering a function
    if node.kind in (CursorKind.FUNCTION_DECL, CursorKind.CXX_METHOD):
        prev_func = current_function
        current_function = node.spelling

        # Traverse inside function
        for c in node.get_children():
            analyze(c)

        current_function = prev_func
        return

    # Variable reference
    if node.kind == CursorKind.DECL_REF_EXPR:
        decl = node.referenced
        if decl and decl in global_vars.values():
            gname = decl.spelling
            if current_function:
                if is_write_reference(node):
                    writes[current_function].add(gname)
                else:
                    reads[current_function].add(gname)

    # Recurse
    for c in node.get_children():
        analyze(c)


# ============
# First pass: collect all global vars
# ============
index = Index.create()
tu = index.parse(SOURCE, args=["-std=c++17"])

for c in tu.cursor.get_children():
    if (
        c.kind == CursorKind.VAR_DECL
        and c.semantic_parent.kind == CursorKind.TRANSLATION_UNIT
    ):
        global_vars[c.spelling] = c

# ============
# Second pass: analyze reads/writes
# ============
for c in tu.cursor.get_children():
    analyze(c)

# ============
# Output results
# ============
print("=== GLOBAL USAGE ANALYSIS ===\n")

for func in sorted(set(list(reads.keys()) + list(writes.keys()))):
    print(f"Function: {func}")
    r = sorted(reads[func])
    w = sorted(writes[func])
    if r:
        print("  READS:")
        for g in r:
            print(f"    - {g}")
    if w:
        print("  WRITES:")
        for g in w:
            print(f"    - {g}")
    print()

print("\n=== GLOBAL VARIABLES SUMMARY ===")
for g in sorted(global_vars.keys()):
    users_r = [f for f in reads if g in reads[f]]
    users_w = [f for f in writes if g in writes[f]]
    print(f"{g}:")
    if users_r:
        print("   Read by:")
        for f in users_r:
            print(f"      - {f}")
    if users_w:
        print("   Written by:")
        for f in users_w:
            print(f"      - {f}")
    if not users_r and not users_w:
        print("   (unused?)")
    print()
