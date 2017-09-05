#include<iostream>

using namespace std;

const float PI = 3.14159;

int max(int m, int n = 0);
float max(float, float);

int main(){
    cout << "max(5,0) :" << max(5) << endl;
    cout << "max(1.2,PI) :" << max(1.2,PI) << endl;
    return 0;
}

int max(int m, int n){
    return m > n ? m : n; 
}

float max(float m, float n){
    return m > n ? m : n; 
}
