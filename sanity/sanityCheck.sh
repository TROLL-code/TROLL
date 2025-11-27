#!/bin/bash

# ----------------------------------------
# Sanity Check Script for TROLL
# ----------------------------------------
# Folder structure (relative to this script):
#   ../mainTROLL4.0.cpp       source code
#   ./base_results/           reference outputs
#   ./test_runs/              newly produced outputs
# ----------------------------------------

set -e

ROOT_DIR="$(cd "$(dirname "$0")/.." && pwd)"
SANITY_DIR="$ROOT_DIR/sanity"
BASE="$SANITY_DIR/base_results"
TEST="$SANITY_DIR/test_runs"

cd "$SANITY_DIR"

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${YELLOW}=== TROLL SANITY CHECK ===${NC}"

# ----------------------------------------
# 1. Compile
# ----------------------------------------
echo -e "${YELLOW}Compiling...${NC}"
rm -f troll

g++ -std=c++17 -O3 -Wall -o troll ../mainTROLL4.0.cpp \
    -I/opt/homebrew/include \
    -L/opt/homebrew/lib \
    -lgsl -lgslcblas -lm

echo -e "${GREEN}✔ Compilation OK${NC}"

# ----------------------------------------
# 2. Run model
# ----------------------------------------
echo -e "${YELLOW}Running model...${NC}"

# Clean test_runs output directory
rm -f "$TEST"/*

./troll \
  -i./inputs/Paracou_input_global.txt \
  -d./inputs/Paracou_input_daily.txt \
  -m./inputs/Paracou_input_climate.txt \
  -p./inputs/Paracou_input_pedology.txt \
  -s./inputs/Paracou_input_species.txt \
  -o"$TEST/test"

echo -e "${GREEN}✔ Run complete${NC}"

# ----------------------------------------
# 3. Compare results
# ----------------------------------------
echo
echo -e "${YELLOW}Comparing test_runs ↔ base_results...${NC}"

fail=0
count=0

for f in "$TEST"/test_*; do
    filename=$(basename "$f")
    ref="$BASE/$filename"

    if [[ ! -f "$ref" ]]; then
        echo -e "$filename [${RED}MISSING REF${NC}]"
        fail=1
        continue
    fi

# Filtered comparison: ignore average computation time line
if diff -q <(grep -Ev "Average computation time" "$ref") \
            <(grep -Ev "Average computation time" "$f") >/dev/null; then
    echo -e "$filename [${GREEN}OK${NC}]"
else
    echo -e "$filename [${RED}DIFF${NC}]"
    diff -u <(grep -Ev "Average computation time" "$ref") \
            <(grep -Ev "Average computation time" "$f")
    fail=1
fi

    ((count++))
done

echo "-----------------------------------"

if [[ $fail -eq 0 ]]; then
    echo -e "${GREEN}All $count files match.${NC}"
else
    echo -e "${RED}There were differences.${NC}"
fi

exit $fail