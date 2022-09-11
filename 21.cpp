#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int,int);
    void printNumber();
    friend complex sumComplex(complex,complex);
};
void complex::setNumber(int n1 ,int n2){
    a=n1;
    b=n2;
}
void complex::printNumber(){
    cout<<a<<" + "<<b<<"i";
}

complex sumComplex(complex x,complex y){
    complex sum; 
    sum.setNumber((x.a+y.a),(x.b+y.b));
    return sum;
}
int main(){
    complex c1 , c2 , c3;
    c1.setNumber(1,4);
    c2.setNumber(3,5);
    c3=sumComplex(c1,c2);
    cout<<"The sum of complex ";c1.printNumber();cout<<" and ";c2.printNumber();cout<<" is ";c3.printNumber();cout<<".";
    return 0;
}