#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    std::cin >> x ;
    string s=to_string(x);
    sort(s.begin(), s.end(), greater<int>());
    int y = stoi(s);
    std::cout << y <<endl ;
    return 0;
}