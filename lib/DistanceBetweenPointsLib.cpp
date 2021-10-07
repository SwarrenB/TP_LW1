#define LIB_EXPORT
#include "DistanceBetweenPointsLib.h"
#include <string>
#include <math.h>
#include <iostream>
using namespace std;

double Calculation(int x1, int y1, int x2, int y2)
{
    double x = pow(x2 - x1, 2.0);
    double y = pow(y2 - y1, 2.0);
    return sqrt(x + y);
    
}
