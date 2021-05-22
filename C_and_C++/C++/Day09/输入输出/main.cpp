#include <iostream>

using namespace std;

/*
cin.get();
cin.get();
cin.getline();
cin.ignore();
cin.peak();
cin.putback();

*/

void test01()
{
    int num;
    cin>>num;
    cout << num << endl;
}

void test02()
{
    int num;
    cout<<"请输入一个1到10的数字："<<endl;

    while(true)
    {
        cin>>num;
        if(num>0 &&num<=10)
        {
            cout<<"输入的数字为："<<num<<endl;
            break;
        }
        cout<<"对不起，请重新输入"<<endl;
        cin.clear(); // 重置标志位
        cin.sync(); // 清空缓冲区

        cout<<"标志位"<<cin.fail()<<endl;
    }
}

int main()
{
    //test01();
    test02();
    return 0;
}
