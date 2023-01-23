#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20],adr[20];
    int roll;
    long int tel;
    ifstream in;
    in.open("student.txt",ios::in);
    if (in.fail())
    {
        cout<<"File cannot be opened"<<endl;
        exit(1);
    }
    in>>name>>roll>>adr>>tel;
    while(in)
    {
        cout<<name<<"\t"<<roll<<"\t"<<adr<<"\t"<<tel<<endl;
        in>>name>>roll>>adr>>tel;
    }
    in.close();
    return 0;
}