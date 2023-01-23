#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;

class student{
    char name[20],address[20];
    int roll;
    float marks;
    public:
        void getdata(){
            cout<<"Enter the name: ";cin>>name;
        cout<<"Enter the roll no: ";cin>>roll;
        cout<<"Enter the address: ";cin>>address;
        cout<<"Enter the marks ";cin>>marks;
        }
        void putdata(){
            cout<<setw(10)<<name<<setw(10)<<roll<<setw(10)<<address<<setw(10)<<marks;
        }
};
int main()
{
    student s;
    fstream inout;
    inout.open("student.txt",ios::in);

    if (!inout)
    {
        cout<<"File cannot be opened"<<endl;
        exit(1);
    }
    while (inout.read((char *)&s,sizeof(s)))
    {
        s.putdata();
    }
    inout.close();
    return 0;
}