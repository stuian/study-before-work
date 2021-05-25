#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <time>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int score)
    {
        this->p_name = name;
        this->score = score;
    }
    string p_name;
    int score;
};

void createPerson(vector<Person>&v)
{
    string nameSeed = "ABCDE";
    for(int i=0;i<5;i++)
    {
        string name = "选手";
        name += nameSeed[i];

        int score = 0;
        Person p(name,score);
        v.push_back(p);
    }
}

void setScore(vector<Person>&v)
{
    for(vector<Person>::iterator it=v.begin();it!=v.end();it++)
    {
        deque<int>d;
        for(int i=0;i<10;i++)
        {
            int score = rand()%41+60; //60-100
            d.push_back(score);
        }

        for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++)
        {
            cout<<*dit<<" ";
        }
        cout<<endl;

        //排序
        sort(d.begin(),d.end());

        d.pop_back(); //去除最高
        d.pop_front();

        int sum = 0;
        for(deque<int>::iterator dit=d.begin();dit!=d.end();dit++)
        {
            sum += *dit;
        }

        int avg = sum / d.size();

        it->score = avg;
    }
}

int main()
{
    srand((unsigned int) time(NULL)); //随机数种子

    vector<Person>v;

    createPerson(v);

    //打分
    setScore(v);

    return 0;
}
