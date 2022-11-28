#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    std::cin >> str ;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i]>='a'&& str[i]<='z')
        {
            str[i] -= 32;
        }
        
    }
    
    std::cout << str <<endl ;
    transform(str.begin(), str.end(), str.begin(),
              ::tolower);
    std::cout << str <<endl ;
    return 0;
}