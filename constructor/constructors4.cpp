#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interest;
    float returnvalue;
    public:
        bankdeposit(){}
        bankdeposit(int p, int t,float r);
        bankdeposit(int p, int t,int r);
        void show();
};
bankdeposit:: bankdeposit(int p, int t,float r){
    principal =p;
    years=t;
    interest=r;
    returnvalue=principal;
    for (int i = 0; i < t; i++)
    {
        returnvalue= returnvalue*(1+interest);
    }  
}
bankdeposit:: bankdeposit(int p, int t,int r){
    principal =p;
    years=t;
    interest=(float)r/100;
    returnvalue=principal;
    for (int i = 0; i < t; i++)
    {
        returnvalue= returnvalue*(1+interest);
    }  
}

void bankdeposit::show(){
    cout<<endl<<"Principal amount was "<<principal
        <<", return value after "<<years
        <<" year is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,t;
    float r;
    int R;

    cout<<"Enter the value of p t and r"<<endl;
    cin>>p>>t>>r;
    bd1=bankdeposit(p,t,r);
    bd1.show();

    cout<<"Enter the value of p t and R"<<endl;
    cin>>p>>t>>R;
    bd2=bankdeposit(p,t,R);
    bd2.show();
    return 0;
}