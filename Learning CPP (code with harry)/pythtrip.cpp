#include<bits/stdc++.h>
using namespace std;

bool check(int x, int y,int z){
    int a = max(x, max(y, z));
    int b, c;
    if (a==x)
    {
        b=y;
        c = z;
    }
    else if (a==y)
    {
        b=x;
        c = z;
    }
    else{
        b = x;
        c = y;
    }
    if (a*a ==(b*b+c*c))
    {
        return true;
    }
    else
        return false;
}


int main(){
    int n, x, y, z;
    std::cin >> n ;
    while (n--)
    {
        std::cin >> x>>y>>z ;
        if (check(x,y,z))
        {
            std::cout << "pythagorian triplet" <<endl ;
        }
        else
        {
            std::cout << "not a pythagorian triplet" <<endl ;
        }
        
        
    }
    
    
    return 0;
}