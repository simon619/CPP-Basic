#include <iostream>
#include <string>
using namespace std;

class Human {
  public:
  string name;
  string color;
  int numberOfEyes;
  string gender;
  int blood;
  Human(string name, string color, int number, string gender, int bl){
    name = name;
    color = color;
    numberOfEyes = number;
    gender = gender;
    blood = bl;    
  }
  void detail(int ne) {
    int x = ne + this->blood;
    cout << "New Blood Pressure is: " << x << endl;
  }  
};

int main(){
    Human obj("Simon", "brown", 2, "male", 80);
    obj.detail(20);
    return 0;
}



