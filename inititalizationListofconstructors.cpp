#include<iostream>
using namespace std;

/*
syntax for initilization list in constructor:
constructoe(argument-list) : initialization-section
{
    assignment + othercode;
}

*/

class Test{
    int a;
    int b;
    public:
        // Test(int i,int j): a(i),b(j)
        // Test(int i,int j): a(i),b(i+j)
        // Test(int i,int j): a(i),b(a+j)
        Test(int i,int j): b(j),a(i+b)//gives problem because a is inititalized first
        {
            cout<<"Constructor executed"<<endl;
            cout<<"value if a is"<<a<<endl;
            cout<<"value if b is"<<b<<endl;
        }
};
int main()
{
    Test t(2,3);
    return 0;
}