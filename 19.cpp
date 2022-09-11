#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void checkBinary();
    void displayBinary();
    void displayBinary_once();

public:
    void getBinary();
    void onceCompliment();
};
void binary::getBinary(void)
{
    cout << "Enter a binary digit" << endl;
    cin >> s;
}

void binary::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary formate";
            exit(0);
        }
    }
}

void binary::onceCompliment(void)
{   checkBinary();
    displayBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            {
                s.at(i) = '0';
            }
    }
    displayBinary_once();
}

void binary::displayBinary(void)
{
    cout << "Your binary number is " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary::displayBinary_once(void)
{
    cout << "Your number's once compliment is " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.getBinary();
    // b.checkBinary();
    // b.displayBinary();
    b.onceCompliment();
    b.displayBinary_once();
    return 0;
}