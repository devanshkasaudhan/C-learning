#include<iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m){
         size = m;
         arr = new T[size];
    };
    T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];

        }
        return d;
    }
    
};




int main(){
    vector<int> v1(4);
    v1.arr[0]=2;
    v1.arr[1]=4;
    v1.arr[2]=5;
    v1.arr[3]=6;
    vector<int> v2(4);
    v2.arr[0]=25;
    v2.arr[1]=0;
    v2.arr[2]=6;
    v2.arr[3]=3;
    int a = v1.dotproduct(v2);
    cout << a << endl;
    

    return 0;
}