#include <iostream>
#include <string>
using namespace std;

class ClAndObj {
    public:
    string name;
    int age;
};

int main() {
    ClAndObj obj1, obj2;
    obj1.name = "Simon";
    obj1.age = 25;

    obj2.name = "Chief";
    obj2.age = 30;

    cout << obj1.name << " " << obj1.age << endl;
    cout << obj2.name << " " << obj2.age << endl;
    return 0;
}