#include <iostream>
#include <string>
using namespace std;

class Access{
    private:
    int id;
    public:
    string uni;
};

int main() {
    Access obj;
    obj.uni = "Brac Uni";
    obj.id = 17201066; // This gives error
    cout << "Uni Name: " << obj.uni << "Id: " << obj.id << endl;
    return 0; 
}