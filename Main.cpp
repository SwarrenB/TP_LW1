#include <stdlib.h>
#include <iostream>
#include <string>
#include <limits.h>
#include <vector>
#include "lib/DistanceBetweenPointsLib.h"
using namespace std;

int input_number(std::istream& input)
{
    int ans;
    input >> ans;
    while (!input || !(INT_MIN <= ans <= INT_MAX))
    {
        input.clear();
        std::cout << "You trying to input an incorrect value.";
        input >> ans;
    }
    return ans;
}

int main()
{
    cout << "***Calculating distance between two points***" << std::endl;
    vector<int> x;
    vector<int> y;
    
    double L = INT_MAX, L_fact;
    cout << "How many points does your graph contain? -> "
        int number = input_number(cin);
    for (int i = 1; i <= number; i++)
    {
        cout << "Input X coordinate of " << i << " point -> ";
        x.push_back(input_number(cin));
        cout << "Input Y coordinate of " << i << " point -> ";
        y.push_back(input_number(cin));
        for (int j = 0; j < x.size(); i++)
        {
            L_fact = Calculation(x[j], y[j], x[x.size() - 1], y[y.size() - 1]);
            if (L_fact < L)
                L = L_fact;
        }
    }
    cout << "Minimal distance between your points is: " << L << endl;
    system("pause");
    return 0;
}