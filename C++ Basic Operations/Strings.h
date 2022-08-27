//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_STRINGS_H
#define NEW_STRINGS_H
#include <iostream>
#include <string>
using namespace std;

class Strings {
public:
    void st() {
        cout << "Concatenation \n";
        string a = "Simon";
        string b = "Abhijet";
        string c = a + b;
        cout << c + "\n";
        string d = a + " " + b;
        cout << d + "\n";
        cout << "Appending\n";
        string e = a.append(b);
        cout << e + "\n";
        cout << "Length\n";
        string st = "My name is " + d +"\n";
        cout << st;
        int len = st.length();
        printf("Length: %d\n", len);
        cout << "Access\n";
        cout << st[0];
    }
};

#endif //NEW_STRINGS_H
