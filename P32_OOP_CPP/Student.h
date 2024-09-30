#pragma once

#include <iostream>

using namespace std;


class Student
{
	char*  name = nullptr;
	int    age = 0;

	const int id;

	static int group;

	static int count;

public:


	Student();

	Student(int id, const char* n);
	
	Student(int id, int a);

	Student(int id, const char* n, int a);

	Student(const Student& obj);

	~Student();

	void  setAge(int a);

	int   getAge() const;

	void  setName(const char* n);

	char* getName() const;

	void  info() const;

	static void setGroup(int g);
	
	static int getGroup();
};


int Student::group = 102;

int Student::count = 0;


Student::Student() : id(0)
{
	cout << "Constructor" << endl;
}

Student::Student(int id, const char* n) : id(id)
{

}

Student::Student(int id, int a) : age{a}, id(id)
{
}

Student::Student(int id, const char* n, int a) : id(id)
{
	setAge(a);
	setName(n);
	cout << "Constructor 2" << endl;
}

Student::Student(const Student& obj) : id(obj.id)
{
	setName(obj.name);
	setAge(obj.age);
}

Student::~Student()
{
	delete name;
}


void Student::setAge(int a)
{
	if (a > 0 && a < 100)
		age = a;
}

int Student::getAge() const
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

char* Student::getName() const
{
	return name;
}

void Student::info() const
{
	cout << "ID  : " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Age : " << age << endl;
}

void Student::setGroup(int g)
{
	//age++;
	group = g;
}

int Student::getGroup()
{
	return group;
}

