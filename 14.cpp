#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int fevonachi(int a){
    if (a<=2){
        return 1;
    }
    return fevonachi(a-2)+fevonachi(a-1);
}
int main(){
    int a,fact=1;
    cout<<"enter the number "<<endl;
    cin>>a;
    // for (int i = 1; i <= a ; i++)
    // {
    //     fact = fact * i;
    // }
    
    // // cout<<"factorial of the number "<<a<<" is "<<fact<<endl; 
    // cout<<"factorial of "<<a<<" is "<<factorial(a);
    cout<<"term of fevinachi of "<<a<<" is "<<fevonachi(a);


    return 0;
}