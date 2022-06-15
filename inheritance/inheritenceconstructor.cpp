#include<iostream>
using namespace std;

/*
case1:
class B:public A{
    //order of execution of constructir --> first A() then B()
};

case2:
classA:public B,public C{
    //order of execution of constructor --> B() then C() then A()
}
case A: public B, virtual public C{
    //order of execution of constructor --> C() then B() then C()
}
*/


class Base1{
    int data1;
    public:
        Base1(int i){
            data1 =i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(){
            cout<<"The value of the data is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 =i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(){
            cout<<"The value of the data is "<<data2<<endl;
        }
};

class Derived:public Base1,public Base2{
    int derived1,derived2;
    public:
        Derived(int a,int b,int c,int d):Base1(a),Base2(b){
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor is called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main()
{
    Derived pandey(1,2,3,4);
    pandey.printDataBase1();
    pandey.printDataBase2();
    pandey.printDataDerived();
    return 0;
}