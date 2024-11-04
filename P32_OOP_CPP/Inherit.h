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

	~Human()
	{
		cout << "Dest Human" << endl;
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

	~Teacher()
	{
		cout << "Dest Teacher" << endl;
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


class A
{
private:
	int a1;

protected:
	int a2;

public:
	int a3;

	void A1() {}
};

class B : public A
{
private:
	int b1;

protected:
	int b2;

public:
	int b3;

	void B1()
	{
		//a1 = 3;
		a2 = 5;
		a3 = 9;
	}

	void A11()
	{
		A1();
	}
};

