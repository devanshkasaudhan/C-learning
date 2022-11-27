#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int sum=0,count=0;
	std::cin >>arr[0]>>arr[1]>>arr[2]>>arr[3] ;
	for (int i = 0; i < 4; i++) {
	    sum+=arr[i];
	    count++;
	    if(sum>=40){
	        break;
	    }
	}
	std::cout << count << std::endl;
	return 0;
}
