#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED



#endif // MYSTRING_H_INCLUDED
# include <iostream>
# include <string.h>

using namespace std;

class MyString
{
public:
    MyString(const char* str);
    MyString(const MyString & str);
    ~MyString();
private:
    char * pString;
    int m_size;
};
