#pragma once
#include<iostream>

using namespace std;

class Array
{
	int* arr;
	int size;


public:
	explicit Array(int size);

	Array(const Array& obj);

	~Array();

	void set() const;

	void show() const;

	void append(int value);

	// TODO

	void insert(int value, int index);

	int length() const;

	void remove(int index);

	void clear();

	int sum() const;

	int max() const;

	int min() const;

	int* get() const;

};

Array::Array(int size)
{
	this->size = size;
	this->arr = new int[size];
	cout << "Constructor" << endl;
}

Array::Array(const Array& obj)
{
	cout << "Constructor copy" << endl;
	this->size = obj.size;
	this->arr = new int[this->size];
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}

Array::~Array()
{
	cout << "Destructor" << endl;
	delete arr;
}

void Array::set() const
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void Array::show() const
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

int* Array::get() const
{
	return arr;
}