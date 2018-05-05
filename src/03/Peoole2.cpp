#include<iostream>

using namespace std;

class People2{

protected:
    const char *name;
    int age;

public:
    //People2(){};//此句如果注释，派生类直接不带参数的对象时会报错
    People2(char *name, int age);
};

People2::People2(char *name, int age):name(name), age(age){}

class Student: public People2{
protected:
    float score;
public:
    Student(){};
};

int main(){
    Student stu();
    return 0;
}