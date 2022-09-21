#include <bits/stdc++.h>
//#include <bits/stdc++.h>
//It is basically a header file that includes every standard library.
// In programming contests, using this file is a good idea, 
//when you want to reduce the time wasted in doing chores;
// especially when your rank is time sensitive. 

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*class std::vector<std::__cxx11::string>
A standard container which offers fixed time access to individual elements in any order.

Template Parameters:
_Tp – Type of element.
_Alloc – Allocator type, defaults to allocator<_Tp>. Meets the requirements of a <a href="tables.html#65">container</a>, a <a href="tables.html#66">reversible container</a>, and a <a href="tables.html#67">sequence</a>, including the <a href="tables.html#68">optional sequence requirements</a> with the %exception of push_front and pop_front. In some terminology a %vector can be described as a dynamic C-style array, it offers fast and efficient access to individual elements in any order and saves the user from worrying about memory and size allocation. Subscripting ( [] ) access is also provided as with C-style arrays.*/

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> ar) {

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ar_count_temp;
    getline(cin, ar_count_temp);

    int ar_count = stoi(ltrim(rtrim(ar_count_temp)));

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = simpleArraySum(ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
