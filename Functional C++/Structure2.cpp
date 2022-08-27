#include <iostream>
#include <string>
using namespace std;

int main() {
    struct 
    {
        /* data */
        string name;
        int age;
        int id;
        double height; 
    } student1, student2;

    student1.name = "Simon";
    student1.age = 25;
    student1.height = 5.66;

    student2.name = "Liva";
    student2.age = 24;
    student2.height = 5.4;

    cout << student1.name << " " << student1.age << endl;
    cout << student2.name << " " << student2.age << endl;
    
}