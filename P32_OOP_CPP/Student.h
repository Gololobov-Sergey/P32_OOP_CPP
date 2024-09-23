#pragma once

#include <iostream>

using namespace std;


class Student
{
private:

	char* name;
	int age;

	int id;

public:
	void setAge(int a)
	{
		if (a > 0 && a < 100)
			age = a;
	}

	int getAge()
	{
		return age;
	}

	void setName(const char* n)
	{
		name = new char[strlen(n) + 1];
		for (size_t i = 0; i < strlen(n) + 1; i++)
		{
			name[i] = n[i];
		}
	}

	char* getName();

	void info();
};

void Student::info()
{
	cout << "Name: " << name << endl;
	cout << "Age : " << age << endl;
}
