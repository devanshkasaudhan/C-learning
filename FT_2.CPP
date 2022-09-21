#include<iostream>
using namespace std;
template <class T1, class T2, class T3>
class myclass
{
private:
    /* data */
public:
    T1 f1;
    T2 f2;
    T3 f3;
    void display(){
        cout << f1 << endl
             << f2 << endl
             << f3;
    }
    myclass(){};
    myclass(T1 a,T2 b,T3 c);
};
template<class T1,class T2, class T3>
myclass<T1,T2,T3>::myclass(T1 a,T2 b,T3 c)
{
    f1 = a;
    f2 = b;
    f3 = c;
}



int main(){
    myclass<int,float,char> sub(5, 6.8768,'y');
    sub.display();
    return 0;
}