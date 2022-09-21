#include<iostream>
using namespace std;

class employee
{
private:
    
public:
    int id, mobile_no;
    float salary;
    employee(int a, int b, float c);
    ~employee();
};

employee::employee(int a, long int b, float c)
{
    id=a;
    mobile_no=b;
    salary=c;
}

employee::~employee()
{
}


int main(){
    employee harry(1,8074115709,1500) ,devansh(2,9458057843,20000), arpit(3,9696191101,20000);
    cout<<harry.salary<<endl;
    cout<<devansh.mobile_no<<endl;
    cout<<arpit.id<<endl;

    return 0;
}