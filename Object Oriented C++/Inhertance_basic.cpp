#include <iostream>
#include <string>
using namespace std;

class Thunder{
    public:
    string type = "Thunder";
    void attack(){
        cout << "Thunderbolt" << endl;
    }
};

class Pikachu: public Thunder{
    public:
    string name;
};

int main(){
    Pikachu obj;
    obj.name = "Pikachu";
    cout << "Pokemon Name: " << obj.name << endl;
    cout << "Type: " << obj.type << endl;
    obj.attack();
    return 0;
}
