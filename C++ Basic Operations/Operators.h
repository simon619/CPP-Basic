//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_OPERATORS_H
#define NEW_OPERATORS_H
#include <iostream>
using namespace std;

class Operators {
public:
    void op() {
        int a, b;
        a = 5;
        b = 7;
        int sum = a + b;
        printf("Sum: %d\n", sum);
        a += 3;
        printf("After increment: %d\n", a);
        int x = 20;
        if (x > 15 && x < 30) {
            cout << "20  is\n";
        }
        if (x % 2 == 0 && x < 30) {
            printf("%d is a even number\n", x);
        }
    }
};

#endif //NEW_OPERATORS_H
