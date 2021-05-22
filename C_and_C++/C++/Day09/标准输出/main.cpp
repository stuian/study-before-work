#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    //ofstream ofs("./test.txt",ios::out | ios::trunc);
    //写文件
    ofstream ofs;
    ofs.open("./test.txt",ios::out|ios::trunc);
    if(!ofs.is_open())
    {
        cout<<"打开失败"<<endl;
    }
    ofs<<"姓名：abc"<<endl;
    ofs<<"年龄：15"<<endl;


}

void test02()
{
    ifstream ifs;
    ifs.open("./test.txt",ios::in);
    if(!ifs.is_open())
    {
        cout<<"打开失败"<<endl;
    }
    //第一种方法
//    char buf[1024];
//    while (ifs>>buf) //按行读取
//    {
//        cout<<buf<<endl;
//    }

    //第二种方式
//    char buf2[1024];
//    while(!ifs.eof()) // 是否读到文件尾
//    {
//        ifs.getline(buf2,sizeof(buf2));
//        cout<<buf2<<endl;
//    }

    //按单个字符读取
    char c;
    while ((c=ifs.get())!=EOF)
    {
        cout<<c;
    }
    ifs.close();
}

int main()
{
    //test01();
    test02();
    return 0;
}
