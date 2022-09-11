#include <iostream>
using namespace std;

class Bankdeposit
{
private:
    int principal, years;
    float intrest, returnvalue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    Bankdeposit1();
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrest = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+r);

    }
}
Bankdeposit::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrest = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue*(1+intrest);
        // returnvalue = returnvalue + returnvalue*r;
    }
}

Bankdeposit::Bankdeposit1()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " is " << returnvalue;
}

int main()
{
    int p, y, r;
    cout << "Enter the value of p,y,r " << endl;
    Bankdeposit bd1, bd2, bd3;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.Bankdeposit1();
    return 0;
}