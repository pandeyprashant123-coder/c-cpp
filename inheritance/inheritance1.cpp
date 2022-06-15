#include <iostream>
using namespace std;

//base class
class employee
{

public:
    int id;
    float salary;
    employee() {}
    employee(int inpid)
    {
        id = inpid;
        salary = 4000;
    }
};

//derived class
// class {{derived-class-name}} : {{visibility-mode base-calss-name}}{
//     class members/methods....
// }
//default visibility mode is 'private';
//private members are never inherited
//private: public members of the base class becomes private members of the derived class
//public: public members of the base class becomes public members of the derived class

class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    employee pandey(1), roshan(2);
    cout << pandey.salary << endl;
    cout << roshan.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    skillf.getData();
    return 0;
}