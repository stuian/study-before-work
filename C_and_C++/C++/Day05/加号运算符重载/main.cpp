#include <iostream>

using namespace std;

class Person
{
public:
    Person(){};
    Person(int a,int b): m_a(a),m_b(b)
    {

    }

//    //利用局部函数进行加号运算符重载
//    Person operator+(Person& p)
//    {
//        Person temp;
//        temp.m_a = this->m_a + p.m_a;
//        temp.m_b = this->m_b + p.m_b;
//        return temp;
//    }

    int m_a;
    int m_b;
};

//利用全局函数进行加号运算符重载
Person operator+(Person &p1,Person &p2)
{
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}

void test01()
{
    Person p1(10,30);
    Person p2(10,20);

    Person p3 = p1+p2;

    cout<<"p3的m_a是: "<<p3.m_a<<" p3的m_b是: "<<p3.m_b<<endl;
}

int main()
{
    test01();
    return 0;
}
