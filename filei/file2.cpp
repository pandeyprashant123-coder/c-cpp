#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream pout("sample1.txt");
    cout<<"Enter your name"<<endl;
    string name;
    cin>>name;

    pout<<name+" is my name.";

    pout.close();

    ifstream pin("sample1.txt");
    string content;
    pin>>content;
    cout<<"The content of the file is: "<<content<<endl;
    pin.close();
    return 0;
}