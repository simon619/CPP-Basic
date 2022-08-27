//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_INPUT_H
#define NEW_INPUT_H
#include <iostream>
using namespace std;
class Input{
public:
    void inp() {
        string x;
        int y;
        cout << "What is your favourite Programming Language? \n";
        cin >> x;
        cout << "Pick a Number: \n";
        cin >> y;
        printf("The name is %s and the picked number is %d", x.c_str(), y);
    }
};
#endif //NEW_INPUT_H
