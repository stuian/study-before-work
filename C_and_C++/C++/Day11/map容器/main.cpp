#include <iostream>
#include <map>
using namespace std;

void test01()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,10));

    m.insert(make_pair(3,20));

    m.insert(map<int,int>::value_type(2,30));

    m[4] = 40;

    m.erase(1);

    for(map<int,int>::iterator it = m.begin();it!=m.end();it++)
    {
        cout<<"key£º"<<it->first<<" value:"<<it->second<<endl;
    }
}

int main()
{
    test01();
    return 0;
}
