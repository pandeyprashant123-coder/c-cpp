#include<iostream>
#include<cmath>
using namespace std;

class simple_calculator{
   double num1,num2; 
   public:
        void getdatasimple(){
            cout<<"Enter the num1 and num2"<<endl;
            cin>>num1>>num2;
        }
        void perform_operationsimple(){
            cout<<"The value of a + b is"<<num1+num2<<endl;
            cout<<"The value of a - b is"<<num1-num2<<endl;
            cout<<"The value of a * b is"<<num1*num2<<endl;
            cout<<"The value of a / b is"<<num1/num2<<endl;
        }
        
};

class scientific_calculator{
    double num1;
    public:
        void getdata(){
            cout<<"Enter the num1"<<endl;
            cin>>num1;
        }
        void perform_operation(){
            cout<<"The value of sinx is"<<sin(num1)<<endl;
            cout<<"The value of exp(x)is"<<exp(num1)<<endl;
        }
};

class hybrid_calculator: public simple_calculator,public scientific_calculator{

};
int main()
{
    hybrid_calculator calculation1;
    calculation1.getdatasimple();
    calculation1.perform_operationsimple();
    calculation1.getdata();
    calculation1.perform_operation();
    return 0;
}