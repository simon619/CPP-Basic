//
// Created by ASUS on 8/23/2022.
//

#ifndef NEW_FORLOOP_H
#define NEW_FORLOOP_H
#include <iostream>
using namespace std;

class ForLoop {
public:
    void forloop() {
        cout << "Enter a number: \n";
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            if (i == 16) {
                continue;
            }
            else if (i == 18) {
                break;
            }
            else if (i % 2 == 0) {
                cout << i << "\n";
            }
            else {
                cout << "won't print odd number \n";
            }
        }
    }
};

#endif //NEW_FORLOOP_H
