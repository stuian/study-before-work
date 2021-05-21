#include <iostream>
#include <string>
using namespace std;

class Calculator
{
public:
    void setV1(int v)
    {
        value1 = v;
    }

    void setV2(int v)
    {
        value2 = v;
    }

    int getResult(string oper)
    {
        if(oper == "+")
        {
            return value1 + value2;
        }
        else if (oper == "-")
        {
            return value1 - value2;
        }
    }

private:
    int value1;
    int value2;
};

void test01()
{
    Calculator c;
    c.setV1(2);
    c.setV2(3);
    cout<<c.getResult("+")<<endl;
}

int main()
{
    test01();

    //cout << "Hello world!" << endl;
    return 0;
}
