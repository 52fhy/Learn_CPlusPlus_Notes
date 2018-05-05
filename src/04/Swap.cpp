#include<iostream>

using namespace std;

template<typename T> void Swap(T *a, T *b){
    T temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

template<typename T> void Swap2(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 2, b=3;
    //Swap(&a, &b);
    Swap2(a, b);//引用的方式更直接

    cout << a << ',' << b <<endl;
    return 0;
}