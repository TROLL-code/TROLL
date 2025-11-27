# #!/bin/bash
# #
# # clean
# rm -f troll
# # compile
# g++ -std=c++17 -O3 -Wall -o troll ../../mainTROLL4.0.cpp \
#     -I/opt/homebrew/include \
#     -L/opt/homebrew/lib \
#     -lgsl -lgslcblas -lm
# # run
# ./troll -i../Paracou_input_global.txt -d../Paracou_input_daily.txt -m../Paracou_input_climate.txt -p../Paracou_input_pedology.txt -s../Paracou_input_species.txt -otest

# Colors
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

#-------------------------------------------
# 1. Compile
#-------------------------------------------
echo "Compiling…"
rm -f troll

g++ -std=c++17 -O3 -Wall -o troll ../../mainTROLL4.0.cpp \
    -I/opt/homebrew/include \
    -L/opt/homebrew/lib \
    -lgsl -lgslcblas -lm

if [[ $? -ne 0 ]]; then
    echo -e "${RED}❌ Compilation failed.${NC}"
    exit 1
fi

echo -e "${GREEN}✔ Compilation OK${NC}"
echo

#-------------------------------------------
# 2. Run
#-------------------------------------------
echo "Running model…"
./troll \
    -i../Paracou_input_global.txt \
    -d../Paracou_input_daily.txt \
    -m../Paracou_input_climate.txt \
    -p../Paracou_input_pedology.txt \
    -s../Paracou_input_species.txt \
    -otest

if [[ $? -ne 0 ]]; then
    echo -e "${RED}❌ Execution failed.${NC}"
    exit 1
fi

echo -e "${GREEN}✔ Run complete${NC}"
echo

#-------------------------------------------
# 3. Compare outputs
#-------------------------------------------
echo "Checking outputs…"

fail=0

for f in $(ls TROLL-dev/test_0* 2>/dev/null); do
    f0="./TROLL-ref-20240830/$(basename "$f")"

    if cmp -s "$f" "$f0"; then
        echo -e "$f    [${GREEN}OK${NC}]"
    else
        echo -e "$f    [${RED}DIFF${NC}]"
        diff "$f0" "$f"
        fail=1
    fi
done

if [[ $fail -eq 0 ]]; then
    echo -e "${GREEN}All outputs match.${NC}"
else
    echo -e "${RED}Some outputs differ.${NC}"
fi

exit $fail