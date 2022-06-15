#include<iostream>
#include<fstream>
#include<cstring>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstram -->derived from fstreambase
*/

// In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file :
// 1. using the constructor 
//2. Using the member fuction open () of the class 
using namespace std; 

int main()
{
    string st = "pandey bhai";
    string st2;
    //Opening file using constructor and reading it
    //ofstream out("sample1.txt"); //Write operation
    //out <<st;

    //opening files using constructor and read to it
    ifstream in("sample1b.txt"); //read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}