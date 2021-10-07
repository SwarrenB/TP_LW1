#include <stdlib.h>
#include <iostream>
#include <string>
#include "lib/DistanceBetweenPointsLib.h"
using namespace std;

int main()
{
    cout << "***Calculating distance between two points***" << std::endl;
    double x1, x2, y1, y2, L;
    for (int i = 1; i < 3; i++)
    {
        cout << "Input X coordinate of " << i << " point: ";
        i % 2 == 0 ? cin >> x2 : cin >> x1;
        cout << endl;

        cout << "Input Y coordinate of " << i << " point: ";
        i % 2 == 0 ? cin >> y2 : cin >> y1;
    }
    L = Calculation(x1, x2, y1, y2);
    cout << "Distance between your points is: " << L << endl;
    system("pause");
    return 0;
}