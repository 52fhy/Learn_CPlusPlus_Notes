/**
* file MyClass.cpp
*/

#include <iostream>

using namespace std;

class MyClass
{
  private:
    int num;

  public:
    MyClass(int n = 0) : num(n) {} //构造函数
    ~MyClass()
    {
        cout << num << "执行析构函数" << endl;
    }; //析构函数

    void setNum(int n);//函数申明
    int getNum();//函数申明
};

void MyClass::setNum(int n)
{
    num = n;
}

int MyClass::getNum(){
    return num;
}

int main()
{
    MyClass a;    //最后自动执行析构
    MyClass b(3); //最后自动执行析构
    cout << b.getNum() << endl;
    MyClass *p = new MyClass(1);
    MyClass *q = new MyClass(2); //不会执行析构
    delete p;                    //先执行析构

    // system("PAUSE");
    return 0;
}