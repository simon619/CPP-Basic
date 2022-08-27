//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_WHILELOOP_H
#define NEW_WHILELOOP_H
#include <iostream>

using namespace std;

class WhileLoop {
public:
    void wh()  {
        cout << "Enter a number: \n";
        int x;
        cin >> x;
        int i = 0;
        while (i < x) {
            cout << to_string(i) + "\n";
            i ++;
        }
    }
};

#endif //NEW_WHILELOOP_H
