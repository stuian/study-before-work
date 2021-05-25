#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
        //cout<<v.size()<<endl;
        cout<<v.capacity()<<endl;
    }
    if(v.empty())
    {
        cout<<"容器为空"<<endl;
    }
    else
    {
        cout<<"容器不为空"<<endl;
    }

    //v.resize(10,-1);

    //巧用swap
    //vector<int>(v).swap(v) //妙啊

    //v.reserve(100000) //预留出空间
}

void printVector(vector<int>&v)
{
    for(vector<int>::iterator vi=v.begin();vi!=v.end();vi++)
    {
        cout<<*vi<<" ";
    }
    cout<<endl;
}

void test02()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(11);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.insert(v.begin(),2,100);
    printVector(v);
    v.pop_back();
    printVector(v);
}

void test03()
{
    //逆序遍历
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    for(vector<int>::reverse_iterator it=v.rbegin();it!=v.rend();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;

    //vector容器是随机迭代器
//    vector<int>::iterator ivBegin = v.begin;
//    ivBegin = ivBegin + 1; //如果不报错就是随机迭代器。
}

int main()
{
//    test01();
//    test02();
    test03();
    return 0;
}
