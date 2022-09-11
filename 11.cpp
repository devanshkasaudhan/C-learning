#include<iostream>
using namespace std;
int sum(int a, int b){
    int c= a+b;
    return c;
}
int diff(int a, int b){
    int c= a-b;
    return c;
}
int division(int a, int b);
int remender(int a, int b);

int multiply(int, int);
void g();
int main(){
    // int num1,num2;
    // cout<<"enter first no. "<<endl;
    // cin>>num1;
    // cout<<"enter secound no. "<<endl;
    // cin>>num2;
    // cout<<"sum is "<<sum(num1,num2)<<endl;
    // cout<<"diference is "<<diff(num1,num2)<<endl;
    // cout<<"multiply is "<<multiply(num1,num2)<<endl;
    // cout<<"division is "<<division(num1,num2)<<endl;
    // cout<<"remender is "<<remender(num1,num2)<<endl;
    
    
    return 0;
}
int multiply(int a, int b){
    int c= a*b;
    return c;
}
int division(int a, int b){
    int c= a/b;
    return c;
}
int remender(int a, int b){
    int c= a%b;
    return c;
}
void g(){
    cout<<"hello bro"
}