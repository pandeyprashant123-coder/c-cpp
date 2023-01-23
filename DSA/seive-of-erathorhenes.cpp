#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int temp[100];
    for (int i = 2; i <= n; i++)
    {
        temp[i]=0;
        for (int j = 2*i; j <= n; j+=i)
        {
            temp[j]=1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(temp[i]==0){
            cout<<i<<endl;
        }
    }
    
    return 0;
}