#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    // for (int i = 0; i <  sizeof(v); i++) this makes a initial vector of 12 elements which changes according to lenghth afterwords
    for (int i = 0; i <  v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}

int main(){
    vector<int> a1;
    int element, size;
    cout << "Enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element ";
        cin >> element;
        // a1[i] = element ; we have to use class functions to work with vector unless they show error or wrong results 
        a1.push_back(element); 
    }
    
        display(a1);
    return 0;
}