#include<iostream>
using namespace std;

// int funcAverage(int a,int b){
//     float avg =(a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a,float b){
//     float avg =(a+b)/2.0;
//     return avg;
// }
template <class t>
void swapp(t &a,t&b){
    t temp = a;
    a=b;
    b=temp;
}
template <class t1,class t2>
float funcAverage(t1 a,t2 b){
    float avg =(a+b)/2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5,2.4);
    cout<<"The average of these numbers is "<<a<<endl;
    int x=5, y=7;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}