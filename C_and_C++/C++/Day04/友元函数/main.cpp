#include <iostream>
#include <string>

using namespace std;

class Building
{
public:
    friend void visit_room(Building & b);
    Building()
    {
        this->sitting_room = "客厅";
        this->bedroom = "卧室";
    }
    string sitting_room;
private:
    string bedroom;
};

//友元函数：全局函数
void visit_room(Building & b)
{
    cout<<"好友正在访问你的"<<b.bedroom<<endl;
}

int main()
{
    Building b1;
    visit_room(b1);
    return 0;
}
