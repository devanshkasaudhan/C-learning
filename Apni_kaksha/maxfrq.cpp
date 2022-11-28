#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    std::cin >> s ;
    int arr[26];
    for (int i = 0; i <26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    int max=0;
    char ans='a';
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            ans = 'a' + i;
        }
        
    }
    std::cout << ans<<" "<<max <<endl ;
    
    
    
    return 0;
}