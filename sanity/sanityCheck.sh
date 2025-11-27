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
BASE="./base_results"
TEST="./test_runs"
SKIP_RUN=true

cd "$SANITY_DIR"

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${YELLOW}=== TROLL SANITY CHECK ===${NC}"

if [ ! SKIP_RUN ]; then

    # ----------------------------------------
    # 1. Compile
    # ----------------------------------------
    echo -e "${YELLOW}Compiling...${NC}"

    cmake ..
    make clean
    make 

    echo -e "${GREEN}✔ Compilation OK${NC}"

    # ----------------------------------------
    # 2. Run model
    # ----------------------------------------
    echo -e "${YELLOW}Running model...${NC}"

    # Clean test_runs output directory
    rm -f "$TEST"/*

    # reduce nomber of time iterations to 20
    sed 's/nbiter\s\+365/nbiter 20/' ../example/global_inputs.txt > "$TEST"/global_inputs_nbiter20.txt

    ./TROLL \
    -i"$TEST"/global_inputs_nbiter20.txt \
    -s../example/species.txt \
    -m../example/daily_climate.txt \
    -d../example/halfhourly_climate.txt \
    -p../example/soil.txt \
    -o"$TEST/test"

    echo -e "${GREEN}✔ Run complete${NC}"

fi

# ----------------------------------------
# 3. Compare results
# ----------------------------------------
echo
echo -e "${YELLOW}Comparing test_runs ↔ base_results...${NC}"

fail=0
count=0

for f in $(ls -1 "$TEST"/test_*); do
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

    ((count+=1))
done

echo "-----------------------------------"

if [[ $fail -eq 0 ]]; then
    echo -e "${GREEN}All $count files match.${NC}"
else
    echo -e "${RED}There were differences.${NC}"
fi

exit $fail