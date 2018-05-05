#include<iostream>

using namespace std;

class People{

protected:
    const char *name;
    int age;

public:
    People(const char *name, int age){
        this->name = name;
        this->age = age;
    }
    void printInfo();
};

void People::printInfo(){
    cout << this->name << "-" << this->age;
}


class Student: public People{
protected:
    float score;
public:
    Student(const char *name, int age, float score);
};

Student::Student(const char *name, int age, float score):People(name,age), score(score){}//在派生类的构造函数中调用基类的构造函数

int main(){
    Student stu("yjc", 22, 11.0);
    stu.printInfo();
    return 0;
}