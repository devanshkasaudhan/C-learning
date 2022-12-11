#include <bits/stdc++.h>
using namespace std;
#include<string.h>

int main() {
	int t;
	while(t--){
	    int count=0,n;
	    std::cin >> n;
	    string s= bitset<32>(n).to_string().substr(32 - log2(n));
	    for (auto i : s) {
	        if (i==1){
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}