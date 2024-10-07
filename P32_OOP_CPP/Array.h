#pragma once
#include<iostream>
#include<cassert>

using namespace std;

class Array
{
	int* arr;
	int size;


public:
	explicit Array(int size);

	Array(const Array& obj);

	Array& operator=(const Array& obj);

	~Array();

	void copy(const Array& obj);

	void set() const;

	void print() const;

	void append(int value);

	// TODO

	void insert(int value, int index);

	int length() const;

	void remove(int index);

	void clear();

	/*int sum() const;

	int max() const;

	int min() const;*/

	int* get() const;

	int& operator[](int index);

	// TODO


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
	this->copy(obj);
}

Array& Array::operator=(const Array& obj)
{
	if (&obj == this)
		return *this;

	delete this->arr;

	this->copy(obj);

	return *this;
}

Array::~Array()
{
	cout << "Destructor" << endl;
	delete arr;
}

void Array::copy(const Array& obj)
{
	this->size = obj.size;
	this->arr = new int[this->size];
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}

void Array::set() const
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

void Array::print() const
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

inline void Array::insert(int value, int index)
{
}

inline int Array::length() const
{
	return 0;
}

inline void Array::remove(int index)
{
}

inline void Array::clear()
{
}

int* Array::get() const
{
	return arr;
}

int& Array::operator[](int index)
{
	assert(index >= 0 && index < size);

	return arr[index];
}
