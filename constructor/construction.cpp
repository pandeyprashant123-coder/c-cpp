#include<iostream>
using namespace std;
 class complex{
     int a,b;
     public:
        complex(void);//constructor declaration
        //constructors should be of same name as class
        void printnumber(){
            cout<<"your no. is "<<a <<"+"<< b <<" i"<<endl;
        }
 };
complex::complex(void)//it is default constructor
{
    a=0;
    b=0;
}
int main()
{
    complex c;
    c.printnumber();
    return 0;
}