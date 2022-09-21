#include<iostream>
using namespace std;
class y;
class x{
    int data;
    friend void swap(x &,y &);
    public:
    void setdata(int a){
        data=a;
    }
    void printdata(){
        cout<<"The value of data in x is "<<data<<endl;
    }
    void pData(){
        cout<<data<<endl;
    }
};
class y{
    int datay;
    friend void swap(x &,y &);
    public:
    void setdata(int a){
        datay=a;
    }
    void printdata(){
        cout<<"The value of data in y is "<<datay<<endl;
    }
    void pDatay(){
        cout<<datay<<endl;
    }
};
void swap(x &a1, y &a2){
    int temp;
    temp = a1.data;
    a1.data=a2.datay;
    a2.datay=temp;

}

int main(){
    x a;
    a.setdata(4);
    a.printdata();

    y b;
    b.setdata(7);
    b.printdata();

    swap(a,b);
    cout<<"value of data of x after swaping is ";
    a.pData();
    cout<<"value of data of y after swaping is ";
    b.pDatay();
    return 0;
}