#include<iostream>
using namespace std;
int product(int a,int b){
    int c=a*b;
    return c;
}
    
class tut
{
private:
    int a,b,c;
public:
    int d,e;
 tut(/* args */);
     tut();
};
 tut: tut(/* args */)
{
}
 tut:: tut()
{
}

int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    cout<<"the value of product is "<<product(a,b)<<endl;
    return 0;
}