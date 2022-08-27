#include <iostream>
#include <string>
using namespace std;

class Creature {
    public:
    void sound() {
        cout << "Any Sound" <<endl;
    }
};

class Human: public Creature {
    public:
    void sound() {
        cout << "Hi, How are you?" << endl;
    }
};

class Dog: public Creature {
    public:
    void sound() {
        cout << "Bark" << endl;
    }
};

int main() {
    Creature c;
    Human h;
    Dog d;

    c.sound();
    h.sound();
    d.sound();
    return 0;
}