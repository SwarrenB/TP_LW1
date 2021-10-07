#define LIB_EXPORT
#include "DistanceBetweenPointsLib.h"
#include <string>
#include <cmath>
#include <iostream>

double Calculation(double x1, double x2, double y1, double y2)
{
    std::cout << "Calculating the distance...\n";
    double x = pow(x1 - x2, 2);
    double y = pow(y1 - y2 , 2);
    return sqrt(x + y);
    
}
