#include <iostream>
#include <string>
using namespace std;

class Arcues {
    public:
    void say1() {
        cout << "I created universe" << endl;
    }
};

class Dialga: public Arcues {
    public:
    void say2() {
        cout << "I created Time" << endl;
    }
};

class Time: public Dialga {
    public:
    void say3() {
        cout << "I am Time" << endl;
    }
};

int main() {
    Time obj;
    obj.say1();
    obj.say2();
    obj.say3();
    return 0;
}