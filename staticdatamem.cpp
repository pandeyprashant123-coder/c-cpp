#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the id:"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of the employee is "<<id<<" and this is employee no "<<count<<endl;
        }
        
        static void getcount(void){
            cout<<"the value of count is "<<count<<endl;
        }
};

int employee::count;//default value is 0

int main()
{
    employee harry,rohan,kaman;
    harry.setData();
    harry.getData();
    employee::getcount();
    rohan.setData();
    rohan.getData();
    employee::getcount();
    kaman.setData();
    kaman.getData();
    employee::getcount();
    return 0;
}