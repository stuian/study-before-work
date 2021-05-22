#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;


class MyOutOfRangeException:public exception
{
public:
    MyOutOfRangeException(string errorInfo)
    {
        this->m_errorInfo = errorInfo;
    }

    virtual ~MyOutOfRangeException()
    {

    }

    virtual const char* what() const
    {
        return this->m_errorInfo.c_str();
    }

    string m_errorInfo;
};

class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        if (age < 0 || age > 200)
        {
            throw MyOutOfRangeException(string("年龄越界了！"));
        }
    }

    string m_name;
    int m_age;
};

void test01()
{
    try
    {
        Person p("张三",300);
    }
    catch(MyOutOfRangeException & e)
    {
        cout<<e.what()<<endl;
    }
}

int main()
{
    test01();
    return 0;
}
