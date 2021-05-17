#include <iostream>

using namespace std;

class Person
{
public:
    Person(int age)
    {
        this->age = age; //指针到属性不能用.来取值
    }
    int age;
    Person & add_age(Person & p1)
    {
       this->age += p1.age;
       return *this; //返回值，会调用拷贝构造函数；所以函数返回要返回引用
    }
};

void test01()
{
    Person p(10);
    Person p1(20);
    p.add_age(p1).add_age(p1);
    cout<<p.age<<endl;
}

int main()
{
    test01();
    return 0;
}
