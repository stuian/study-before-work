#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void test01()
{
    //构造;string是个类
    string str;
    string str2(str);
    string str3 = str;
    string str4 = "abcd";
    string str5(10,'a');
    cout<<str4<<endl;
    cout<<str5<<endl;

    //基本赋值
    str = "hello"; //char *赋值
    str2 = str4; //string 赋值
    cout<<str2<<endl;

    str3.assign("abcdef",4);
    cout<<str3<<endl;

}

//string 存取字符操作
void test02()
{
    string s = "hello world";
    for(int i=0;i<s.size();i++)
    {
        cout<<s.at(i)<<endl;
//        cout<<s[i]<<endl;
    }
    try
    {
        cout<<s[100]<<endl;
    }
    catch(out_of_range & e)
    {
        cout<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"xxx"<<endl;
    }

}

void test03()
{
    //拼接
    string s1= "我";
    string s2="爱北京";
    s1 += s2; //重载+=，返回s1的引用
    cout<<s1<<endl;

    //find查找
    string s = "abcdef";
    int pos = s.find("bc"); //b开始的位置;找不到返回-1
    pos = s.rfind("bc");
    cout<<"pos = "<<pos<<endl;

    //替换
    string str3 = "hello";
    str3.replace(1,3,"abcd"); // ell->abcd
    cout<<str3<<endl;
}

void test04()
{
    string s1 = "abc";
    string s2 = "abcd";
    if(s1.compare(s2)==0)
    {
        cout<<"s1等于s2"<<endl;
    }
    else if(s1.compare(s2)==1)
    {
        cout<<"s1大于s2"<<endl;
    }
    else
    {
        cout<<"s1小于s2"<<endl;
    }
}

void test05()
{
    //string子串
    string s1 = "abcde";
    string s2 = s1.substr(1,3);
    cout<<s2<<endl;

    string email = "wenjunjiang@163.com";
    int pos = email.find("@");
    string userName = email.substr(0,pos);
    cout<<"用户名为："<<userName<<endl;
}

//插入和删除
void test06()
{
    string s1 = "hello";
    s1.insert(1,"abc");
    cout<<s1<<endl;

    s1.erase(1,3);
    cout<<s1<<endl;
}

//字符串转换
void test07()
{
    string s = "abc";
    //string->const char*
    const char * p = s.c_str();

    //char *->string
    string s2(p);
}

void test08()
{
    string s = "abCdEfg";
    for(int i=0;i<s.size();i++)
    {
        s[i] = toupper(s[i]);
    }
    cout<<s<<endl;
}

int main()
{
//    test01();
//    test03();
//    test04();
//    test05();
//    test06();
    test08();
    return 0;
}
