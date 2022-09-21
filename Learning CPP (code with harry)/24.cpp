#include<iostream>
#include<string>
using namespace std;

class complex {
    int a,b;
    public:
    complex(int ,int);
    void printData(){
        cout<<a<<" + "<<b<<"i ";
    }
};
complex::complex(int x,int y){
    a=x;
    b=y;
}

int main(){
    string str;
    cout<<"Enter the complex number in form of a+bi "<<endl;
    cin>>str;
    int r,i;
    r=str[0];
    i=str[2];
    cout<<r<<endl<<i<<endl;
    complex a(str[0],str[2]), b(8,4);
    a.printData();
    cout<<endl;
    b.printData();
    return 0;
}