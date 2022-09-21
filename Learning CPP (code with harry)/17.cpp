#include<iostream>
using namespace std;
class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){counter=0;}
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout<<"Enter ID of you item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of you item no "<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    shop durga;
    durga.initCounter();
    durga.setPrice();
    durga.setPrice();
    durga.setPrice();
    durga.setPrice();
    durga.setPrice();
    durga.displayPrice();    
    return 0;
}