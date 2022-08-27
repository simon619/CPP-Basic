#include <iostream>
#include <string>
using namespace std;

class EnCap{
    private:
    int id;
    public:
    void setID(int n);
    int getID();
};

void EnCap::setID(int n) {
    id = n;
}

int EnCap::getID() {
    return id;
}

int main() {
    EnCap obj;
    obj.setID(1727065);
    int x = obj.getID();
    cout << "ID: " << x << endl;
    return 0;
}