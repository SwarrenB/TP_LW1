g++ -shared lib/SquareFuncLib.cpp -fpic  -o SquareFuncLib.dll
g++ main.cpp SquareFuncLib.dll
echo Finish