#pragma once
#include<iostream>

using namespace std;

class Array
{
	int* arr;
	int size;


public:
	Array(int size);

	~Array();

	void set();

	void show();

	void append(int value);

	// TODO

	void insert(int value, int index);

	int length();

	void remove(int index);

	void clear();

	int sum();

	int max();

	int min();

	int* get();

};

Array::Array(int size)
{
	this->size = size;
	this->arr = new int[size];
	cout << "Constructor" << endl;
}

Array::~Array()
{
	cout << "Destructor" << endl;
	delete arr;
}

void Array::set()
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void Array::show()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Array::append(int value)
{
	int* temp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete arr;
	arr = temp;
	size++;
}

int* Array::get()
{
	return arr;
}