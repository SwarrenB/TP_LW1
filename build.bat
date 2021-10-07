g++ -shared lib/DistancsBetweenPointsLib.cpp -fpic  -o DistancsBetweenPointsLib.dll
g++ main.cpp DistancsBetweenPointsLib.dll
echo Finish
