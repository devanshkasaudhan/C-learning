#include<iostream>
#include<list>


using namespace std;

template<class T>
void display(list<T> &list1){
    list<T> iterator itr;
    for ( itr = list1.begin(); itr!= list1.end(); itr++)
    {
        cout << *itr << " ";

    }
    
}


int main(){
    list<char> list1;
    for (int i = 0; i < 10; i++)
    {
        cout << "enter the element ";
        cin << list1.push_back;
    }
    
    display(list1);
    return 0;
}