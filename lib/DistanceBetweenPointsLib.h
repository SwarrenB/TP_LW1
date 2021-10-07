#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

#include <string>

extern "C++"
{
    LIB_API double Calculation(double x1, double x2, double y1, double y2);
}