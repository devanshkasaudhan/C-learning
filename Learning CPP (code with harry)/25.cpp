#include <iostream>
using namespace std;
class bankDeposit
{
    int principal, year;
    float intrest, returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, int r);
    bankDeposit(int p, int y, float r);
    show();
};
bankDeposit::bankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    intrest = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue + returnValue * intrest;
    }
}
bankDeposit::bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intrest = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue + returnValue * intrest;
    }
}
bankDeposit::show()
{
    cout << "The money you get after " << year << " is " << returnValue << endl;
}
int main()
{
    int p, y, r;
    float R;
    bankDeposit bd1, bd2, bd3;

    cout << "enter the value of principal amount,year and intrest rate in % " << endl;
    cin >> p >> y >> r;

    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of principal amount,year and intrest rate " << endl;
    cin >> p >> y >> R;

    bd1 = bankDeposit(p, y, R);
    bd1.show();

    return 0;
}