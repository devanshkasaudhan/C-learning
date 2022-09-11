#include<iostream>
using namespace std;
int multi(int a,int b){
    static int c=0;
    c=c+1;
    return a*b+c;
}
float moneyrec(int money,float factor=1.04){
    return money*factor;
}
int strlen
int main(){
    int a,b, money;
    cout<<"value of money is "<<endl;
    cin>>money;
    // cout<<"value of a is "<<endl;
    // cin>>a;
    // cout<<"value of b is "<<endl;
    // cin>>b;
    // cout<<"multipply of a and b is "<<multi(a,b)<<endl;
    cout<<"if you have "<<money<<" rs then you receive "<<moneyrec(money)<<endl;
    cout<<"if you have "<<money<<" rs and special one then you receive "<<moneyrec(money, 1.1)<<endl;



    return 0;
}