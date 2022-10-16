#include <bits/stdc++.h>

using namespace std;

int str2int(string s){
    int i=s[0]*10 + s[1];
    return i;
}
string int2str(int i){
    string s;
    s[1]=i%10;
    s[0]=i/10;
    return s;
}
string timeConversion(string s) {
    char ampm= s[9];
    string hours12= s.substr(0,2);
    string min= s.substr(3,2);
    string sec= s.substr(6,2);
    string hours24;
    if (ampm=='A') {
        if (str2int(hours12)==12) {
        hours24[0]=0;
        hours24[1]=0;
        }
        hours24[0]=hours12[0];
        hours24[1]=hours12[1];
        return hours24;
    } 
    else {
        int h=str2int(hours12);
        h=h+12;
        string h2=int2str(h);
        hours24[0]=h2[0];
        hours24[1]=h2[1];
        return h2;
    }
    // string col;
    // col[0]=s[3];
    // string ans=hours24+col+min+col+sec;
    // return hours24;
}

int main(){
    string s;
    cin >> s;
    string s2=timeConversion(s);
    cout << s2;
}