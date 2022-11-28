#include<bits/stdc++.h>
using namespace std;

bool checkpow2(int n){
    return (n && !(n & (n - 1)));
}

int main(){
    int x;
    std::cin >> x ;
    std::cout << checkpow2(x) <<endl ;
    return 0;
}