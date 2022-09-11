#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 16; i++)
    {
    if (i==9)
    {
        continue;/* code */
    }
    cout<<i<<endl;
    if (i==12)
    {
        break;/* code */
    }
    
    }
    
    return 0;
}