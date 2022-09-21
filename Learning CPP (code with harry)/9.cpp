#include<iostream>
using namespace std;
typedef struct employ
{
    int ID;
    char favchar;
    float salary;
    /* data */
} ap;

int main(){
    
    struct employ harry;
    ap rohan;
    ap kameena;
    ap sushmita;

    {
    harry.ID=1;
    harry.favchar='c';
    harry.salary= 12000;
    sushmita.favchar='d';
    sushmita.ID=3;
    sushmita.salary=500000;
    kameena.favchar='e';
    kameena.ID=4;
    kameena.salary=6793;
    
    };
    cout<<"harry"<<endl;
    cout<<"id "<<harry.ID<<endl;
    cout<<"charecter "<<harry.favchar<<endl;
    cout<<"salary "<<harry.salary<<endl<<endl;
    
    cout<<"sushmita"<<endl;
    cout<<"id "<<sushmita.ID<<endl;
    cout<<"charecter "<<sushmita.favchar<<endl;
    cout<<"salary "<<sushmita.salary<<endl<<endl;
    
    cout<<"kameena"<<endl;
    cout<<"id "<<kameena.ID<<endl;
    cout<<"charecter "<<kameena.favchar<<endl;
    cout<<"salary "<<kameena.salary<<endl<<endl;
    
    return 0;
}