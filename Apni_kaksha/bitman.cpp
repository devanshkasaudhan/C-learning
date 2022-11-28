#include<bits/stdc++.h>
using namespace std;

bool getbit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}
int setbit(int n, int pos){
    return (n | (1 << pos));
}
int clearbit(int n,int pos){
    return (n & (~(1 << pos)));
}
int updatebit(int n, int pos, int value){
    n = (n & (~(1 << pos)));
    return (n | (value << pos));
}

int main(){
    // std::cout << getbit(5,2) <<endl ;
    // std::cout << setbit(5,1) <<endl ;
    // std::cout << clearbit(5,2) <<endl ;
    std::cout << updatebit(5,1,1) <<endl ;
    return 0;
}