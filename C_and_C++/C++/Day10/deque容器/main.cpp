#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>& d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
    {
        cout<<*it<<" ";
    }
}

void test01()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    d.push_back(13);
    printDeque(d);
    cout<<endl;

    deque<int>d2(d.begin(),d.end());
    d2.push_back(100);

    d.swap(d2);
    printDeque(d);
}

void test02()
{
    deque<int> d;
    d.push_back(10);
    d.push_back(30);
    d.push_back(20);
    d.push_front(200);

    d.pop_back();
    d.pop_front();

    printDeque(d);
}

int main()
{
//    test01();
    test02();
    return 0;
}
