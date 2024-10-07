#pragma once

#include <iostream>

using namespace std;

class String
{
private:
    char* str;
    int size;

    static int count;

public:
    String();

    explicit String(int size);

    String(const char* userStr);

    String(const String& obj);

    String& operator=(const String& obj);

    ~String();

    void set();

    static int getCount();

    void print() const;

    char* get() const;

    int length() const;

    String operator+(const String& st);

    int compare(const String& st) const; // 1 0 -1

    int find(char symbol); // return index first element

    bool operator> (const String& st) const;
    bool operator< (const String& st) const;
    bool operator== (const String& st) const;

    friend ostream& operator<<(ostream& out, const String& st);
    friend istream& operator>>(istream& in, String& st);

};

int String::count = 0;

String::String() : size(80)
{
    str = new char[size + 1];
    str[0] = '\0';
    count++;
}

String::String(int size)
{
    this->size = size;
    str = new char[size + 1];
    str[0] = '\0';
    count++;
}

String::String(const char* userStr)
{
    size = strlen(userStr);
    str = new char[size + 1];
    strcpy_s(str, size + 1, userStr);
    count++;
}

String::String(const String& obj) : size(obj.size)
{
    str = new char[size + 1];
    strcpy_s(str, size + 1, obj.str);
    count++;
}

String& String::operator=(const String& obj)
{
    if (&obj == this)
        return *this;

    delete this->str;

    this->size = obj.size;
    this->str = new char[size + 1];
    strcpy_s(str, size + 1, obj.str);
    count++;

    return *this;
}

String::~String()
{
    delete[] str;
    count--;
}

void String::set()
{
    cout << "Enter text: ";
    char buff[1024];
    cin.getline(buff, 1024);
    delete str;
    size = strlen(buff);
    str = new char[size + 1];
    strcpy_s(str, size + 1, buff);
}

void String::print() const
{
    cout << str << endl;
}

int String::getCount()
{
    return count;
}

char* String::get() const
{
    return str;
}

int String::length() const
{
    return size;
}

String String::operator+(const String& st)
{
    String newstring(this->size + st.size);
    for (size_t i = 0; i < this->size; i++)
    {
        newstring.str[i] = this->str[i];
    }
    for (size_t i = 0; i < st.size; i++)
    {
        newstring.str[i + this->size] = st.str[i];
    }
    newstring.str[this->size + st.size] = '\0';
    return newstring;
}

int String::compare(const String& st) const
{
    for (size_t i = 0; i < this->size + 1; i++)
    {
        if (this->str[i] > st.str[i])
            return 1;
        else if (this->str[i] < st.str[i])
            return -1;
    }
    return 0;
}

int String::find(char symbol)
{
    for (size_t i = 0; i < size; i++)
    {
        if (str[i] == symbol)
            return i;
    }
    return -1;
}

bool String::operator>(const String& st) const
{
    return this->compare(st) == 1;
}

bool String::operator<(const String& st) const
{
    return this->compare(st) == -1;
}

bool String::operator==(const String& st) const
{
    return this->compare(st) == 0;
}

ostream& operator<<(ostream& out, const String& st)
{
    out << st.str;
    return out;
}

istream& operator>>(istream& in, String& st)
{
    char buff[1024];
    in.getline(buff, 1024);
    delete st.str;
    st.size = strlen(buff);
    st.str = new char[st.size + 1];
    strcpy_s(st.str, st.size + 1, buff);
    return in;
}
