//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_CONDITIONS_H
#define NEW_CONDITIONS_H
#include <iostream>
using namespace std;

class Conditions {
public:
    void cond() {
        int a = 5;
        int b = 10;
        if (b % 2 == 0) {
            cout << to_string(b) + " is a even number\n";
        }
        else if (b >= 5 && b <= 25) {
            cout << to_string(b) + "\n";
        }
        else {
            cout << to_string(a) + "\n";
        }
        string day;
        cout << "Enter the TIme \n";
        int time;
        cin >> time;
        day = (time <= 12) ? "Sunday" : "Monday";
        cout << day;
    }
};

#endif //NEW_CONDITIONS_H
