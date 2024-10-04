#pragma once

#include <iostream>

using namespace std;

class String
{
private:
    char* str;
    int size;

public:
    String();

    explicit String(int size);

    String(const char* userStr);

    String(const String& obj);

    ~String();

    void set();

    int getCount() const;

    void print() const;

    char* get() const;
};

String::String() : size(80)
{
    str = new char[size + 1];
    str[0] = '\0';
}

String::String(int size)
{
    str = new char[size + 1];
    str[0] = '\0';
}

String::String(const char* userStr)
{
    size = strlen(userStr);
    str = new char[size + 1];
    strcpy_s(str, size + 1, userStr);
}

String::String(const String& obj) : size(obj.size)
{
    str = new char[size + 1];
    strcpy_s(str, size + 1, obj.str);
}

String::~String()
{
    delete[] str;
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

int String::getCount() const
{
    return strlen(str);
}

char* String::get() const
{
    return str;
}
