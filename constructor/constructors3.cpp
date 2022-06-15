#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
        simple(int a, int b=3/* ->is default*/){
            data1=a;
            data2=b;
        }
        void printdata();
};

void simple::printdata(){
    cout<<"The vakue of data1 and data2 is "<<data1<<" and "<<data2<<endl;
}
int main()
{
    simple s(1,2);
    s.printdata();
    return 0;
}