#include <iostream>
#include <string>
using namespace std;

class MeAndOb {
    public:
    double height;
    double width;  
    void method1() {
        cout << "Hello" << endl;
    }
    double method2();
};

double MeAndOb::method2() {
    return width * height;
}

int main() {
    MeAndOb obj;
    obj.height = 10.4542;
    obj.width = 5.26546;
    obj.method1();
    double x = obj.method2();
    cout << x << endl;
    return 0;
}
