#include<iostream>
using namespace std;
// lecture 16
int multiply(int a, int b){
    int c= a*b;
    return c;
}

// void swap(int a, int b){
//     int temp=a;    not working condition
//     a=b;
//     b=temp;
// }
// void swap(int *a, int *b){
//     int temp=*a;
 // by using pointers 
//  call by value
//     *a=*b;
//     *b=temp;
// }
void swap(int &a, int &b){
//  call by reference
    int temp=a; // by using reference variable
    a=b;
    b=temp;
}
int main(){
    // cout<<"the multiple of 4 an 4 is"<<multiply(4,4);
    int num1,num2;
    cout<<"enter first no. "<<endl;
    cin>>num1;
    cout<<"enter secound no. "<<endl;
    cin>>num2;
    cout<<"numbers before swpping "<<num1<<" and "<<num2<<".\n";
    swap(num1,num2);
    cout<<"numbers after swpping "<<num1<<" and "<<num2<<".\n";
    return 0;
}