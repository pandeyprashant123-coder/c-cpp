#include<iostream>
using namespace std;

class employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setdata(int a ,int b, int c);
        void getdata()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee:: setdata(int a1, int b1 , int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee ram;
    ram.d=33; 
    ram.e=66;
    ram.setdata(22,44,55);
    ram.getdata();
    cout<<"Thank you!!"<<endl;
    return 0;
}