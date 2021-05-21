#include <iostream>

using namespace std;

class Animals
{
public:
    Animals()
    {
        cout<<"构造函数"<<endl;
    }
    ~Animals()
    {
        cout<<"析构函数"<<endl;
    }
    virtual void speak()
    {
        cout<<"动物在说话！"<<endl;
    }
};

class Cat: public Animals
{
public:
    Cat()
    {
        cout<<"构造函数"<<endl;
    }
    ~Cat()
    {
        cout<<"析构函数"<<endl;
    }
    virtual void speak()
    {
        cout<<"小猫在说话！"<<endl;
    }
};

void doSpeak(Animals & a)
{
    a.speak();
}

int main()
{
    Cat c;
    doSpeak(c);
    //cout << "Hello world!" << endl;
    return 0;
}
