#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10, 20, 40, 65, 32};
    vector<int>::iterator i = v.begin();
    auto j=v.end();
    cout<< *i<<" "<<endl;
    i++;
    cout<< *i<<" "<<endl;
    i++;
    cout<< *(--j)<<" "<<endl;
    j--;
    cout<< *j<<" "<<endl;
    // j--;
    cout<< *prev(j)<<" "<<endl;
    j--;
 
    return 0;
}