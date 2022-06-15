#include<iostream>
using namespace std;

class c2;
class c1{
    int val;
    friend void exchange(c1 &,c2 &);
    public:
        void intdata(int a){
            val=a;
        }
        void dispaly(void){
            cout<<val<<endl;
        }
    
};

class c2{
    int val1;
    public:
        void intdata(int a){
            val1=a;
        }
        void dispaly(void){
            cout<<val1<<endl;
        }
        friend void exchange(c1 &,c2 &);
};

void exchange(c1 &x,c2 &y){
    int tmp=x.val;
    x.val=y.val1;
    y.val1=tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.intdata(34);
    oc2.intdata(22);
    exchange(oc1,oc2);
    cout<<"the value of c1 after exchanging is: ";
    oc1.dispaly();
    cout<<"the value of c2 after exchanging is: ";
    oc2.dispaly();
    return 0;
}