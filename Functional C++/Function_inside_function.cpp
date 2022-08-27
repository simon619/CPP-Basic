#include <iostream>
#include <string>
using namespace std;

float func2(int a,  int b) {
        float c = a / b;
        return c; 
    }

float func1(int x, int y) {
    return func2(x, y);
}

int main() {
    float t = func1(10, 7);
    cout << t <<endl;
}