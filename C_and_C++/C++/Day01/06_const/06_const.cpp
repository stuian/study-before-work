#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string user_name;
    int age;
};

void test1()
{
    const Person p1={"abc",12}; //分配内存
    //p1.user_name = "www";
    Person *p = (Person *)&p1;
    p->user_name = "jwj";
    (*p).age = 23;

    cout<<p1.user_name<<endl;
    cout<<p1.age<<endl;
}

int main()
{
    // 1、真常量;不能修改
    const int a = 10;
    int *p = (int *)&a;
    *p = 20;
    cout<<"a:"<<a<<endl;
    cout<<"*p:"<<*p<<endl;
    // 2、自定义变量
    int m = 10;
    const int b = m;
    int *q = (int *)&b;
    *q = 20;
    cout<<"b:"<<b<<endl;
    cout<<"*p:"<<*p<<endl;
    //3、自定义数据类型
    test1();
    return 0;
}
