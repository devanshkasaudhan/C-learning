#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
	std::cin >> t;
	while(t--){
	    string s;
	    std::cin >> s;    
	    if(s.reserve()==s) std::cout << "wins" << std::endl;
	    else std::cout << "loses" << std::endl;
	}
    return 0;
}