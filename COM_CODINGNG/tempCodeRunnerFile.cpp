#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> ar) {

    int n=ar.size();
        int x;
        for (int i=0; i < n; i++) {
        // if (ar[i]>0 and ar[i]<=1000 and n>0 and n<=1000) {
        x=x+ar[i];
        
        }
        return x;
}