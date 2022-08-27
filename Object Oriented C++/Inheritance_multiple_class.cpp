#include <iostream>
#include <string>
using namespace std;

class Fire {
    public:
    string type = "Fire";
    void FireBlast() {
        cout << "Using Fire Blast" << endl;
    }
};

class Dragon {
    public:
    string type = "Dragon";
    void HyperBeam() {
        cout << "Using Hyper Beam" << endl;
    }
};

class Charizard:public Fire, public Dragon {
    public:
    string name = "Charizard";
};

int main() {
    Charizard obj;
    obj.FireBlast();
    obj.HyperBeam();
    return 0;
}

