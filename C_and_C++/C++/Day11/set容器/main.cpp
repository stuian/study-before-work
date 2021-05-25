#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>&s)
{
    for(set<int>::iterator si=s.begin();si!=s.end();si++)
    {
        cout<<*si<<" ";
    }
    cout<<endl;
}

void test01()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.insert(7);

    printSet(s);
    s.erase(3);
}

//仿函数
class compare
{
public:
    bool operator()(int a,int b)
    {
        if(a>b)
        {
            return true;
        }
        return false;

    }
};

void test02()
{
    set<int,compare> s;
    s.insert(5);
    s.insert(1);
    s.insert(9);
    s.insert(3);
    s.insert(7);

    for(set<int,compare>::iterator si=s.begin();si!=s.end();si++)
    {
        cout<<*si<<" ";
    }
    cout<<endl;

    //int pos = s.find(3);//返回值为迭代器，没找到返回end()迭代器
    //int num = s.count(3);

    s.lower_bound(3); //返回大于等于3的第一个元素
    s.upper_bound(3); //返回大于3的第一个元素

//    s1.equal_range(3); //返回lower_bound和upper_bound
}

int main()
{
    test02();
    return 0;
}
