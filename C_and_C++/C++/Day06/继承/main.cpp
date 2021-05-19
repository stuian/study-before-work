#include <iostream>

using namespace std;

//class New
//{
//public:
//    void header()
//    {
//        cout<<"公共头部"<<endl;
//    }
//    void footer()
//    {
//        cout<<"公共底部"<<endl;
//    }
//    void left()
//    {
//        cout<<"左侧列表"<<endl;
//    }
//    void content()
//    {
//        cout<<"播放内容"<<endl;
//    }
//
//};
//
//class Amusement
//{
//public:
//    void header()
//    {
//        cout<<"公共头部"<<endl;
//    }
//    void footer()
//    {
//        cout<<"公共底部"<<endl;
//    }
//    void left()
//    {
//        cout<<"左侧列表"<<endl;
//    }
//    void content()
//    {
//        cout<<"播放内容"<<endl;
//    }
//
//};

void test01()
{
    New new1;
    new1.header();

    Amusement a;
    a.header();
}

//继承写法
//将重复的内容写到一个基类
class BasePage
{
    void header()
    {
        cout<<"公共头部"<<endl;
    }
    void footer()
    {
        cout<<"公共底部"<<endl;
    }
    void left()
    {
        cout<<"左侧列表"<<endl;
    }
};

class News: public BasePage
{
    void content()
    {
        cout<<"新闻播放"<<endl;
    }
};

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
