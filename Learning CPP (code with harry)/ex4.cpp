#include<iostream>
#include<string.h>
// #include<vector>
using namespace std;
void substr(string str,string res = "",int index = 0){
    if (index==str.length()){
        cout << res << " ";
        return;
    }
    substr(str, res,index+1);
    substr(str, res+str[index],index+1);
}
int main(){
    string str;
    cin >> str;
    substr(str);
    return 0;
}