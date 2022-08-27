#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << "Enter a integer number" << endl;
    int x;
    cin >> x;
    int y = factorial(x);
    cout << "Factorial is : " << y <<endl;
    return 0;  
}