//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_ARRAY_H
#define NEW_ARRAY_H
#include <iostream>
using namespace std;
class Array {
public:
    void arr() {
        cout << "Building an array\n";
        string a[4] = {"Simon", "Abhijet", "Master Chief", "Locke"};
        int len = sizeof(a)/sizeof(a[0]);
        for (int i = 0; i < len; i++) {
            cout << a[i] << "\n";
        }
        cout << "Taking input for array\n";
       int b[4] ;
        for (int j = 0; j < 4; j++) {
            cout << "Enter a number: \n";
            cin >> b[j];
        }
        for (int k = 0; k < 4; k++) {
            cout << b[k] << "\n";
        }
        cout << "Testing\n";
        string st[5] = {"Simon", "Mario", "Bruce"};
        cout << "Enter a string: \n";
        string new_val;
        cin >> new_val;
        st[3] = new_val;
        int new_len = sizeof(st)/sizeof (st[0]);
        for (int i = 0; i < new_len; i++) {
            cout << st[i] << "\n";
        }
    }
};
#endif //NEW_ARRAY_H
