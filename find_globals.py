import subprocess
from clang.cindex import Index, Config, CursorKind

# --- Find libclang via Homebrew automatically ---
llvm_prefix = subprocess.check_output(["brew", "--prefix", "llvm"]).decode().strip()
libclang_path = f"{llvm_prefix}/lib/libclang.dylib"
Config.set_library_file(libclang_path)

# --- Path to your main TROLL source file ---
SOURCE = "mainTROLL4.0.cpp"  # adjust if needed


def find_globals(node, results):
    for c in node.get_children():
        # Global variable = VarDecl whose parent is the translation unit
        if (
            c.kind == CursorKind.VAR_DECL
            and c.semantic_parent.kind == CursorKind.TRANSLATION_UNIT
        ):
            results.append(
                {
                    "name": c.spelling,
                    "type": c.type.spelling,
                    "location": f"{c.location.file}:{c.location.line}",
                }
            )
        find_globals(c, results)


index = Index.create()
tu = index.parse(SOURCE, args=["-std=c++17"])

globals_found = []
find_globals(tu.cursor, globals_found)

print("=== GLOBAL VARIABLES ===")
for g in globals_found:
    print(f"{g['name']:<30} {g['type']:<40} {g['location']}")
