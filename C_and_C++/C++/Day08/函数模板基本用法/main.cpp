#include <iostream>

using namespace std;

//template <typename T> // 等价于template <class T>
template <class T>
void mySwap(T & a,T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void test01()
{
    //1、自动类型推导
    int a = 10;
    int b = 20;
    mySwap(a,b);

    //2、显示指定类型
    //mySwap<int>(a,b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main()
{
    test01();
    return 0;
}
