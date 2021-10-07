#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

#include <string>

extern "C++"
{
    LIB_API double Calculation(int x1, int x2, int y1, int y2);
}