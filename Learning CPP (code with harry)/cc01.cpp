#include <iostream>
using namespace std;

int main() {
	
	int T, a, b,btime, mtime;
	long long int temp,n;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
	    std::cin >> n>>a>>b ;
	    temp=n;
	    int count=0;
	    while(temp==1){
	        temp/2;
	        count++;
	    }
	    mtime=count*a+a;
	    btime=count*b;
	    std::cout << mtime+btime << std::endl;
	}
	return 0;
}
