#pragma once
#include<iostream>

using namespace std;

class Animal
{
	string name;
	int age;

public:
	Animal(string name, int age) : name(name), age(age) {}

	virtual ~Animal()
	{
		cout << "Dest Animal" << endl;
	}

	virtual string getType()
	{
		return "Animal";
	}

	virtual string voice() = 0;
};

string Animal::voice()
{
	return "No says";
}


class Cat : public Animal
{
	int* mouse;

public:
	Cat(string name, int age, int mouse) : Animal(name, age) { this->mouse = new int[5]; }

	~Cat()
	{
		cout << "Dest Cat" << endl;
		delete mouse;
	}

	virtual string getType() override
	{
		return "Cat";
	}

	virtual string voice() override
	{
		return "Mau-Mau";
	}
};


class SiamCat : public Cat
{
public:
	SiamCat(string name, int age, int mouse) : Cat(name, age, mouse) {}

	virtual string getType() override
	{
		return "SiamCat";
	}

	virtual string voice() override
	{
		return "Myau-Myau";
	}
};


class Dog : public Animal
{
public:
	Dog(string name, int age) : Animal(name, age) {}

	virtual string getType() override
	{
		return "Dog";
	}


	virtual string voice() override
	{
		return "Gaw-Gaw";
	}
};

class Ravlik : public Animal
{
public:
	Ravlik(string name, int age) : Animal(name, age) {}

	virtual string voice() override
	{
		return Animal::voice();
	}
};