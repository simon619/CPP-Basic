#include <iostream>
using namespace std;

int main() {
    struct {
    /* data */
        string name;
        int age;
    } mystructure;

    mystructure.age = 12;
    mystructure.name = "Simon";

// Print members of myStructure
    cout << mystructure.age << "\n";
    cout << mystructure.name << "\n";
}