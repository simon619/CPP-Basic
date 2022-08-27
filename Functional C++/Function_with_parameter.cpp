#include <iostream>
#include <string>
using namespace std;

float func(string color, float a, float b=10.6) {
    cout << "Color of the Object: " << color << endl;
    float area = a * b;
    return area;   
}

int main() {
    float x = func("Red", 2.0, 6.21);
    cout << x <<endl;
    float y = func("Blue", 3.0, 7.13);
    cout << y <<endl;
    float z = func("Black", 9.0);
    cout << z <<endl;
    return 0;
}