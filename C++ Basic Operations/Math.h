//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_MATH_H
#define NEW_MATH_H
#include <iostream>
#include <cmath>
using namespace std;

class Math {
public:
    void mathematics() {
        cout << "Max Between 5 and 10\n";
        int v1 = max(5, 10);
        cout << to_string(v1) + "\n";
        cout << "Min Between 5 and 10\n";
        int v2 = min(5, 10);
        cout << to_string(v2) + "\n";
        cout << "Sq root of of 50, then round it\n";
        double v3 = sqrt(50);
        cout << to_string(v3) + "\n";
        float v4 = 3.265651321;
        cout  << to_string(round(v4)) + "\n";
        cout << to_string(pow(v1, v2)) + "\n";
    }
};

#endif //NEW_MATH_H
