#include <iostream>

using namespace std;

class Animals
{
public:
    int age;
};

class Sheep: virtual public Animals
{

};

class Tuo:virtual public Animals
{

};

class SheepTuo: public Sheep,public Tuo
{

};

void test01()
{
    SheepTuo st;
    st.age = 100;
    cout<<st.age<<endl;

    //找到sheep的偏移量操作
    //cout<<*(int *)((int *)*(int *)&st + 1)<<endl;

    //找到tuo的偏移量操作
    //cout<<*(int *)((int *)*((int *)&st+1) + 1)<<endl;
}

int main()
{
    test01();
    //cout << "Hello world!" << endl;
    return 0;
}
