#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

class MyPrint:public binary_function<int,int,void>
{
public:
    void operator()(int v,int start) const
    {
        cout<<v + start<<endl;
    }
};



void test01()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    cout<<"请输入起始值"<<endl;
    int num;
    cin>>num;

    for_each(v.begin(),v.end(),bind2nd(MyPrint(),num));
}

int main()
{
    test01();
    return 0;
}
