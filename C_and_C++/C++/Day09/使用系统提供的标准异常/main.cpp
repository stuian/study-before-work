#include <iostream>
#include <stdexcept>
using namespace std;

class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        if (age < 0 || age > 200)
        {
            throw out_of_range("年龄越界了！");
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
    catch(out_of_range & e)
    {
        cout<<e.what()<<endl;
    }
}

int main()
{
    test01();
    return 0;
}
