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
SKIP_RUN=false

cd "$SANITY_DIR"

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${YELLOW}=== TROLL SANITY CHECK ===${NC}"

if [ $SKIP_RUN == false ]; then

    # ----------------------------------------
    # 1. Create reference if missing
    # ----------------------------------------

    if [ ! -d "$BASE" ] || [ -z "$(ls -A "$BASE")" ]; then
      # create BASE dir if missing
      if [ ! -d "$BASE" ]; then
        mkdir "$BASE"
      fi
      echo -e "${YELLOW}Cloning TROLL main branch (the reference)...${NC}"
      # clone TROLL main 
      git clone --depth=1 https://github.com/troll-model/TROLL.git "$BASE"
      # compile TROLL
      cd "$BASE"
      # Detect the operating system
      OS="$(uname -s)"
      # Set GSL_PATH and compile based on the OS
      echo -e "${YELLOW}Compiling TROLL reference version...${NC}"
      if [[ "$OS" == "Darwin" ]]; then
        # macOS
        GSL_PATH=$(brew --prefix gsl)
        g++ -O3 -Wall -o TROLLv4_exe mainTROLL4.0.cpp -I "$GSL_PATH"/include -L "$GSL_PATH"/lib -lgsl -lgslcblas -lm
      elif [[ "$OS" == "Linux" ]]; then
        # Ubuntu/Linux
        GSL_PREFIX=$(pkg-config --variable=prefix gsl)
        g++ -O3 -Wall -o TROLLv4_exe mainTROLL4.0.cpp -I "$GSL_PREFIX"/include/gsl -L "$GSL_PREFIX"/lib/libgsl* -lgsl -lgslcblas -lm
      else
        echo "Unsupported operating system: $OS, TROLL compilation might not work."
        g++ -O3 -Wall -o TROLLv4_exe mainTROLL4.0.cpp -lgsl -lgslcblas -lm
      fi
      echo -e "${GREEN}✔ TROLL reference compilation OK${NC}"
      # reduce nomber of time iterations to 20
      sed 's/nbiter\s\+365/nbiter 20/' ./example/global_inputs.txt > global_inputs_nbiter20.txt
      # run TROLL
      echo -e "${YELLOW}Running TROLL reference version...${NC}"
      ./TROLLv4_exe \
        -i./global_inputs_nbiter20.txt \
        -s./example/species.txt \
        -m./example/daily_climate.txt \
        -d./example/halfhourly_climate.txt \
        -p./example/soil.txt -o./test
      echo -e "${GREEN}✔ TROLL reference run complete${NC}"
      # clear old cache folder
      cd $SANITY_DIR
      rm -rf .troll_cache
    fi

    # ----------------------------------------
    # 2. Compile
    # ----------------------------------------
    echo -e "${YELLOW}Compiling current version...${NC}"

    cmake ..
    make clean
    make 

    echo -e "${GREEN}✔ Compilation OK${NC}"

    # ----------------------------------------
    # 3. Run model
    # ----------------------------------------
    echo -e "${YELLOW}Running current version...${NC}"

    # create TEST dir if missing
      if [ ! -d "$TEST" ]; then
        mkdir "$TEST"
      fi

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
# 4. Compare results
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