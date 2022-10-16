#include<iostream>
using namespace std;

bool arrayIsSortedOrNot(int *arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]< arr[i-1])
        {
            return false;
        }
        
    }
    return true;
}

int main(){
    int n; 
    cout << "Enter the array length \n";
    cin >> n;
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << "th element of array \n";
        cin >> arry[i];
    }

    if ( arrayIsSortedOrNot(arry,n)==false)
    {
        cout << "not sorted";
    }
    else{
        cout << "sorted"; 

    }

    return 0;
}