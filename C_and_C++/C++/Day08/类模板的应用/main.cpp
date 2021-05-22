#include <iostream>
#include "MyArray.hpp"
using namespace std;

void printIntArray(MyArray<int> & array)
{
    for(int i=0;i<array.getSize();i++)
    {
        cout<<array[i]<<endl;
    }
}

class Person
{
public:
    Person()
    {

    }
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};



int main()
{
    MyArray <int>arr(10);
    for(int i=0;i<10;i++)
    {
        arr.push_Back(i+100);
    }
    printIntArray(arr);

    Person p1("jorn",12);
    Person p2("Peter",14);

    MyArray<Person>arr2(10);
    arr2.push_Back(p1);
    arr2.push_Back(p2);

    return 0;
}
