#include <iostream>
using namespace std;

template <class T>
class MyArray
{
public:
    explicit MyArray(int capacity)
    {
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }

    MyArray(const MyArray & array)
    {
        this->m_Capacity = array.m_Capacity;
        this->m_size = array.m_Size;
        this->pAddress = new T[this->m_Capacity];
        for (int i=0;i<m_Size;i++)
        {
            this->pAddress[i] = array[i];
        }
    }

    ~MyArray()
    {
        if(this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
        }
    }

    //=赋值重载
    MyArray& operator=(MyArray & array)
    {
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
        }
        this->m_Capacity = array.m_Capacity;
        this->m_Size = array.m_Size;
        this->pAddress = new T[this->m_Capacity];
        for (int i=0;i<m_Size;i++)
        {
            this->pAddress[i] = array[i];
        }

    }

    //[]重载
    T & operator[](int index)
    {
        return this->pAddress[index];
    }

    //尾插法
    void push_Back(T val)
    {
        this->pAddress[this->m_Size] = val;
        this->m_Size ++;
    }

    int getSize()
    {
        return this->m_Size;
    }

    int getCapacity()
    {
        return this->m_Capacity;
    }

private:
    T * pAddress;
    int m_Capacity;
    int m_Size;
};
