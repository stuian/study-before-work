#include <iostream>
#include <stack>
using namespace std;

void test01()
{
    stack<int> s; // 采用模板类实现
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);

    while(s.size()!=0)
    {
        cout<<"栈顶为："<<s.top()<<endl;
        s.pop();
    }
    cout<<"size = "<<s.size()<<endl;
}

int main()
{
    test01();
    return 0;
}
