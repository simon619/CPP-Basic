//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_VARIABLES_H
#define NEW_VARIABLES_H
#include <iostream>
using namespace std;

class Variable {
public:
    void var(){
        int a = 12;
        int b = 25;
        const int id = 17201066;
        printf("a + b = %d\n",  a + b);
        string name_one =" Simon";
        printf("My name is %s\n",  name_one.c_str());
        char name_two[] = "Simon";
        printf("My name is also %s\n",  name_two);
        char ch = 'S';
        printf("My name starts with %c\n", ch);
        float cgpa = 51.22;
        printf("Cgpa is %f\n", cgpa);
        printf("ID: %d\n", id);
        bool student = false;
        printf("I am a student %s", student?"true":"false");
    }
};

#endif //NEW_VARIABLES_H
