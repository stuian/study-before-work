#include <iostream>

using namespace std;

// 单例模式：为了创建类的对象，并且保证只有一个这样的对象实例
class ChairMan
{
public:
    static ChairMan* getInstance() // 静态成员函数
    {
        return singleMan;
    }

private:
    ChairMan()
    {

    }
    ChairMan(const ChairMan & c)
    {

    }
    // 类内声明，类外初始化
    static ChairMan * singleMan; //不需要通过对象获取，可以通过类名获取(私有化后也不能获取了)
};

ChairMan * ChairMan::singleMan = new ChairMan;

void test01()
{
    // 都会调用构造函数
    //ChairMan c1;
    //ChairMan * c2 = new ChairMan;

//    ChairMan * cm1 = ChairMan::singleMan;
//    ChairMan * cm2 = ChairMan::singleMan;

//    ChairMan::singleMan = NULL;

    ChairMan* c1 = ChairMan::getInstance();
    ChairMan* c2 = ChairMan::getInstance();
    if (c1==c2)
    {
        cout<<"只有一个国家主席！"<<endl;
    }
    else
    {
        cout<<"出现多个国家主席！"<<endl;
    }

    //拷贝构造创建新对象
    ChairMan * c3 = new ChairMan(*c2);
    if (c3==c2)
    {
        cout<<"只有一个国家主席！"<<endl;
    }
    else
    {
        cout<<"出现多个国家主席！"<<endl;
    }

}

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
