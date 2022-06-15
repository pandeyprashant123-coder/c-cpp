#include<iostream>
using namespace std;

class baseClass{
    public:
        int var_base;
        void display(){
            cout<<"displaying base class variable "<<var_base<<endl;
        }
};
class derivedClass: public baseClass{
    public:
        int var_derived;
            void display(){
                cout<<"displaying base class variable from derived class "<<var_base<<endl;
                cout<<"displaying derived class variable "<<var_derived<<endl;
            }
};
int main()
{
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;//pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; invalid(will throw error)
    base_class_pointer->display();

    derivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base=55;
    derived_class_pointer->var_derived = 99;
    derived_class_pointer->display();
    return 0;
}