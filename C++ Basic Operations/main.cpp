#include <iostream>
#include "Output.h"
#include "Variables.h"
#include "Input.h"
#include "Operators.h"
#include "Strings.h"
#include "Math.h"
#include "Conditions.h"
#include "WhileLoop.h"
#include "ForLoop.h"
#include "Array.h"
using namespace std;

int main() {
    cout << "Hello, World!\n";
    cout <<"Output\n";   //Output
    cout<<"------------\n";
    Output obj1;
    obj1.output();
    cout<<'\n';
    cout <<"Variable\n";   //Variable
    cout<<"----------------\n";
    Variable obj2;
    obj2.var();
    cout<<'\n';
    cout <<"Input\n";   //Variable
    cout<<"--------\n";
    Input obj3;
    obj3.inp();
    cout << "\n";
    cout <<"Operators\n";   //Variable
    cout<<"--------\n";
    Operators obj4;
    obj4.op();
    cout << "\n";
    cout <<"String\n";   //Variable
    cout<<"--------\n";
    Strings obj5;
    obj5.st();
    cout << "\n";
    cout <<"Math\n";   //Variable
    cout<<"--------\n";
    Math obj6;
    obj6.mathematics();
    cout << "\n";
    cout <<"Conditions\n";   //Variable
    cout<<"--------\n";
    Conditions obj7;
    obj7.cond();
    cout << "\n";
    cout <<"While Loop\n";   //Variable
    cout<<"--------\n";
    WhileLoop obj8;
    obj8.wh();
    cout << "\n";
    cout <<"For Loop\n";   //Variable
    cout<<"--------\n";
    ForLoop obj9;
    obj9.forloop();
    cout << "\n";
    cout <<"Array\n";   //Variable
    cout<<"--------\n";
    Array obj10;
    obj10.arr();
    cout << "\n";
    return 0;
}
