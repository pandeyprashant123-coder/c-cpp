#include<iostream>
using namespace std;

//destructor neither takes an arguement nor does it return any value
int count=0;
class num{
    
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for the object number "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when destructor is called for the object number "<<count<<endl;
            count--;
        }
};
int main()
{
    cout<<"We are inside main func"<<endl;
    cout<<"creating 1st obj n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"creating two more obj"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}