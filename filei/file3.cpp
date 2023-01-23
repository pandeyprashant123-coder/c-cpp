#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[20],adr[20];
    int roll;
    long int tel;
    ofstream out;
    out.open("student.txt",ios::out);
    cout<<"Enter number of the records to be stored: ";
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<"Enter the name: ";cin>>name;
        cout<<"Enter the roll no: ";cin>>roll;
        cout<<"Enter the address: ";cin>>adr;
        cout<<"Enter the tel ";cin>>tel;
        out<<name<<"\t"<<roll<<"\t"<<adr<<"\t"<<tel<<endl;
    }
    cout<<"file written";
    out.close();
    return 0;
}