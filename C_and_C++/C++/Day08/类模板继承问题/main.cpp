#include <iostream>

using namespace std;

template <class T>
class Base
{
public:
    T m_A;
};

class Child:public Base<int>
{

};

template<class T1,class T2>
class Child2:public Base<T2>
{
public:
    Child2()
    {
        cout<<typeid(T1).name()<<endl;
        cout<<typeid(T2).name()<<endl;
    }
    T1 m_B;
};

void test01()
{
    Child2<int,double>child;
}

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
