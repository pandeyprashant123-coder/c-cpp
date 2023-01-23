#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

class crud{
    int r;
    float mark;
    string name,address;
    public:
    void getdata(){
       cout<<"Enter the name: ";cin>>name;
        cout<<"Enter the roll no: ";cin>>r;
        cout<<"Enter the address: ";cin>>address;
        cout<<"Enter the marks ";cin>>mark;
    }
    void showdata(){
        cout<<setw(10)<<name<<setw(10)<<r<<setw(10)<<address<<setw(10)<<mark;
    }
    int getr(){
        return r;
    }
};
int main()
{
    crud c;
    fstream inout;
    int m,n,obj,roll,location;
    cout<<"what do u want to do ?"<<endl
        <<"1 for read"<<endl
        <<"2 for write"<<endl
        <<"3 for update"<<endl
        <<"4 for append"<<endl
        <<"5 for delete"<<endl<<endl;
    cin>>m;
    
    if(m==1){
        inout.open("student.txt",ios::in);
        while(inout.read((char *)&c,sizeof(c))){
            c.showdata();
        }
        inout.close();
    }
    else if(m==2){
        inout.open("student.txt",ios::out);
        cout<<"Enter the number of students"<<endl;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            c.getdata();
            inout.write((char *)&c,sizeof(c));
        }
        inout.close();
    }
    else if(m==3){
        int found=0;
        inout.open("student.txt",ios::in|ios::out|ios::ate);
        cout<<"Enter the roll no"<<endl;
        cin>>roll;
        inout.seekg(0,ios::beg);
        while (inout.read((char *)&c,sizeof(c)))
        {
            obj++;
            if(c.getr()==roll){
                found=1;
                location=(obj-1)*sizeof(c);
                inout.seekp(location,ios::beg);
                cout<<"Enter the data..";
                c.getdata();
                inout.write((char *)&c,sizeof(c))<<flush;
            }
            break;
        }
        if(found==0){
            cout<<"record not found"<<endl;
        }
        inout.close();
    }
    else if(m==4){
        inout.open("student.txt",ios::app);
        cout<<"Enter the record of the student.."<<endl;
        c.getdata();
        inout.write((char *)&c,sizeof(c));
        inout.close();
    }
    else if(m==5){
        inout.open("student.txt",ios::in);
        crud cr[48];
        int i=0,j;
        cout<<"Enter the rollno of the student.."<<endl;
        cin>>roll;
        inout.seekg(0,ios::beg);
        while(inout.read((char *)&cr[i],sizeof(cr[i]))){
            i++;
        }
        j=i;
        inout.close();
        inout.open("student.txt",ios::out);
        for (int i = 0; i < j; i++)
        {
            if(cr[i].getr()!=roll){
                inout.write((char *)&cr[i],sizeof(cr[i]));
            }
        }
        cout<<"deleted..";
        inout.close();
    }
    return 0;
}