#include<iostream>
using namespace std;

template <class t>
class Panedy{
    public:
        int data;
        Panedy(t a){
            data =a;
        }
        void display();
};

template <class t>
void Panedy<t>::display(){
    cout<<data;
}

//overloading
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am tempeletized func() "<<a<<endl;
}

int main()
{
    // Panedy<float> h(5.7);
    // cout<<h.data;
    // h.display();

    func(4);//Exact matched function takes the highest priority
    return 0;
}