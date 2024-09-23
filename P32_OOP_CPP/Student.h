#pragma once

#include <iostream>

using namespace std;


class Student
{
	char*  name = nullptr;
	int    age = 0;

public:

	Student();

	Student(const char* n);
	
	Student(int a);

	Student(const char* n, int a);

	void  setAge(int a);

	int   getAge();

	void  setName(const char* n);

	char* getName();

	void  info();
};


Student::Student()
{
	cout << "Constructor" << endl;
}

Student::Student(const char* n)
{
}

Student::Student(int a)
{
}

Student::Student(const char* n, int a)
{
	setAge(a);
	setName("No name");
	cout << "Constructor 2" << endl;
}


void Student::setAge(int a)
{
	if (a > 0 && a < 100)
		age = a;
}

int Student::getAge()
{
	return age;
}

void Student::setName(const char* n)
{
	delete name;
	name = new char[strlen(n) + 1];
	for (size_t i = 0; i < strlen(n) + 1; i++)
	{
		name[i] = n[i];
	}
}

char* Student::getName()
{
	return name;
}

void Student::info()
{
	cout << "Name: " << name << endl;
	cout << "Age : " << age << endl;
}
