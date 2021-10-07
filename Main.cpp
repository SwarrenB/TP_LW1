#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include "lib/DistanceBetweenPointsLib.h"
using namespace std;

template<typename T>
auto checkData();

template<>
auto checkData<int>() {
    int number;
    while (!(cin >> number) || cin.peek() != '\n') {
        cin.clear();
        cout << endl << "This is an incorrect value. PLease, try again -> ";
        while (cin.get() != '\n');
    }
    return number;
}

int main()
{
    cout << fixed << setprecision(3);
    cout << "***Calculating distance between two points***" << std::endl;
    //vector<int> x;
    //vector<int> y;
    
    double L = INT_MAX;
    double L_fact;
    cout << "How many points does your graph contain? -> ";
    int number = checkData<int>();
    int x[number];
    int y[number];
    if (number == 1 || number == 0)
        L = 0;
    for (int i = 0; i < number; i++)
    {
        cout << "Input X coordinate of " << i + 1 << " point -> ";
        x[i] = checkData<int>();
        cout << "Input Y coordinate of " << i + 1 << " point -> ";
        y[i] = checkData<int>();
        for (int j = 0; j < i; j++)
        {
            L_fact = Calculation(x[j], y[j], x[i], y[i]);
            if (L_fact < L && L_fact != 0)
                L = L_fact;
        }
    }
    cout << "Minimal distance between your points is -> " << L << endl;
    system("pause");
    return 0;
}