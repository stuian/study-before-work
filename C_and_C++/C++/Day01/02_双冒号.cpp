#include <iostream>

using namespace std;

int value = 200;
void test()
{
    int value = 100;
    cout<<"value的值是:"<<::value<<endl;
}

int main()
{
    test();
    return 0;
}

