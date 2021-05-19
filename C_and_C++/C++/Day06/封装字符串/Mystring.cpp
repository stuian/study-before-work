# include "Mystring.h"

MyString::MyString(const char* str)
{
    this->pString = new char[strlen(str)+1];
    strcpy(this->pString,str);
    this->m_size = strlen(str);
}

MyString::MyString(const MyString & str)
{
    this->pString = new char[strlen(str.pString)+1];
    strcpy(this->pString,str.pString);
    this->m_size = str.m_size;
}

MyString::~MyString()
{
    if(this->pString != NULL)
    {
        delete [] this->pString;
        this->pString = NULL;
    }
}
