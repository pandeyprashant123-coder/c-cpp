#include<iostream>
using namespace std;

//protected inheritance
class base{
    int a;
    protected:
        int b;
};
class derived: protected base{

};
int main()
{
    base c;
    derived d;
    return 0;
}