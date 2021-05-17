#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {

    }
    Person(int t_age)
    {
        age = t_age;
    }
    Person(const Person & p)
    {

    }
    int get_age()
    {
        return age;
    }

private:
    int age = 10;
};

int main()
{
    Person p1(20);
    Person p2(p1);

    cout << p1.get_age() << endl;
    cout << p2.get_age() << endl;
    return 0;
}
