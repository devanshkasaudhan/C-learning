#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y,k;
	    cin >> x>>y>>k;
	    if((y-x)%k!=0){
	        cout << (((y-x)/k)+1) << endl;
	    }
	    else cout << ((y-x)/k) << endl;
	}
	return 0;
}
