#include <iostream>
using namespace std;
class comNum;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComp(comNum, comNum);
    int sumImgComp(comNum, comNum);
};
class comNum
{
    int a, b;
    friend calculator::sumRealComp(comNum, comNum);
    friend calculator::sumImgComp(comNum, comNum);

public:
    void setComp(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printComp()
    {
        cout << a << " +" << b << "i";
    }
};
int calculator::sumRealComp(comNum o1, comNum o2)
{
    return o1.a + o2.a;
}
int calculator::sumImgComp(comNum o1, comNum o2)
{
    return o1.b + o2.b;
}
int main()
{
    comNum a, b, c;

    a.setComp(2, 4);
    b.setComp(3, 4);

    calculator ca;

    c.setComp(ca.sumRealComp(a, b), ca.sumImgComp(a, b)); // valid

    // int r = ca.sumRealComp;
    // int s = ca.sumImgComp;
    // int r = ca.sumRealComp(a,b);
    // int s = ca.sumImgComp(a,b);
    // c.setComp(r,s); also valid

    cout << "The sum of complex ";
    a.printComp();
    cout << " and ";
    b.printComp();
    cout << " is ";
    c.printComp();
    cout << ".";

    return 0;
}