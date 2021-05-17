#include <iostream>
#include "Person.hpp"
using namespace std;

int main()
{
    Person<string,int>p("jwj",23);
    p.showPerson();

    return 0;
}
