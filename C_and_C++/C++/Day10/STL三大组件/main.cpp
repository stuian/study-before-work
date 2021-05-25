#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//操作自定义数据类型
class Person
{
public:
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
};


//普通指针也算是一种迭代器


//容器
void myPrint(int a)
{
    cout<<a<<endl;
}

void test01()
{
    //声明容器
    vector<int> v; // 模板类的写法
    //向容器中加数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    //第一种遍历
//    while(itBegin!=itEnd)
//    {
//        cout<<*itBegin<<endl;
//        itBegin++;
//    }

    //第二种遍历
//    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//    {
//        cout<<*it<<endl;
//
//    }

    //第三种遍历：利用算法
    for_each(v.begin(),v.end(),myPrint); //myPrint只能有一个参数，且参数类型和容器内存储数据的类型一致

}

//存放自定义类型对象
void test02()
{
    vector<Person> v;
    Person p1("大头儿子",10);
    Person p2("小头爸爸",32);
    Person p3("隔壁王叔叔",30);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<"姓名: "<<(*it).m_name<<" 年龄："<<it->m_age<<endl;
        //*it即<>里的内容，即Person
    }
}

//容器嵌套容器
void test03()
{
    vector<vector<int>> v;

    vector<int>v1;
    vector<int>v2;
    vector<int>v3;

    for(int i=0;i<4;i++)
    {
        v1.push_back(i);
        v2.push_back(i+10);
        v3.push_back(i+100);
    }

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for(vector<vector<int>>::iterator vi=v.begin();vi!=v.end();vi++)
    {
        for(vector<int>::iterator vvi=(*vi).begin();vvi!=(*vi).end();vvi++)
        {
            cout<<*vvi<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    test03();
    return 0;
}
