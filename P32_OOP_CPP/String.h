#pragma once

class String
{
	char* str;
	int size;

	static int count;

public:

	String();

	explicit String(int size);

	String(const char* str);

	String(const String& obj);

	~String();

	void set();

	static int getCount();

	void print() const;

	char* get() const;
};

int String::count = 0;