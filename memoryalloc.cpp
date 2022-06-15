#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[200];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
    cout << "Enter ID of your item no " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop pasal;
    pasal.initCounter();
    int n;
    cout<<"Enter the no of goods"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        pasal.setPrice();
    }
    
    // pasal.setPrice();
    // pasal.setPrice();
    // pasal.setPrice();
    pasal.displayPrice();
    return 0;
}