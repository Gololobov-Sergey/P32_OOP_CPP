#pragma once
#include <iostream>

using namespace std;

class Human
{
	string name;
	int age;

protected:

	int phone;

public:

	Human()
	{

	}

	Human(string name, int age) : name(name), age(age)
	{
		cout << "Ctor Human" << endl;
	}

	void info()
	{
		cout << name << " " << age << " " << phone << endl;
	}
};


class Teacher : public Human
{
	int salary;

public:
	Teacher(string name, int age, int salary) : Human(name, age), salary(salary)
	{
		cout << "Ctor Teacher" << endl;
		this->phone = 99;
	}

	void study()
	{

	}

	void info()
	{
		Human::info();
		cout << "Salary: " << salary << endl;
	}
};

class Stud : public Human
{
	
};

