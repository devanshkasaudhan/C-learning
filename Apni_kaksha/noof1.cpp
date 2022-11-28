#include<bits/stdc++.h>
using namespace std;

int noofone(int n){
    int count=0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main(){
    std::cout << noofone(19) <<endl ;
    return 0;
}