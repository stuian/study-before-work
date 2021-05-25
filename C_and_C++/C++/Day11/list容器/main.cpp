#include <iostream>
#include <list>
using namespace std;

void printList(list<int>&L)
{
    for(list<int>::iterator it=L.begin();it!=L.end();it++)
    {
        cout<<*it<<" ";
    }
}

void test01()
{
    list<int>L(10,10); // 10个10
    list<int>L2(L.begin(),L.end());

    //插入
    L2.push_back(200);
    //push_front

    //删除
    //pop_front()
    //pop_back()

    //L2.insert(L2.begin(),100);

    //remove(elem) //删除某一个值

    //L.reverse()
    //L.sort()

    printList(L);
    cout<<endl;
    printList(L2);
}

int main()
{
    test01();
    return 0;
}
