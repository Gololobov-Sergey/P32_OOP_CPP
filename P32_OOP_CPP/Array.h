#pragma once
#include<iostream>
#include<cassert>

using namespace std;

template<class T>
class Array
{
	T* arr;
	int size;


public:
	explicit Array(int size);

	Array(const Array& obj);

	Array& operator=(const Array& obj);

	~Array();

	void copy(const Array& obj);

	void set() const;

	void print() const;

	void append(T value);

	// TODO

	void insert(T value, int index);

	int length() const;

	void remove(int index);

	void clear();

	/*int sum() const;

	int max() const;

	int min() const;*/

	T* get() const;

	T& operator[](int index);

	// TODO

	void func();
};

template<class T>
Array<T>::Array(int size)
{
	this->size = size;
	this->arr = new T[size];
	cout << "Constructor" << endl;
}

template<class T>
Array<T>::Array(const Array& obj)
{
	cout << "Constructor copy" << endl;
	this->copy(obj);
}

template<class T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	if (&obj == this)
		return *this;

	delete this->arr;

	this->copy(obj);

	return *this;
}

template<class T>
Array<T>::~Array()
{
	cout << "Destructor" << endl;
	delete arr;
}

template<class T>
void Array<T>::copy(const Array& obj)
{
	this->size = obj.size;
	this->arr = new T[this->size];
	for (size_t i = 0; i < this->size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}

template<class T>
void Array<T>::set() const
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}

template<>
void Array<float>::set() const
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = (rand() % 10 + 1) / 99.;
	}
}

template<>
void Array<Fraction>::set() const
{
	srand(time(0));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = Fraction((rand() % 10 + 1), rand() % 10 + 2);
	}
}

template<class T>
void Array<T>::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void Array<T>::append(T value)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = value;
	delete arr;
	arr = temp;
	size++;
}

template<class T>
void Array<T>::insert(T value, int index)
{
}

template<class T>
int Array<T>::length() const
{
	return 0;
}

template<class T>
void Array<T>::remove(int index)
{
}

template<class T>
void Array<T>::clear()
{
}

template<class T>
T* Array<T>::get() const
{
	return arr;
}

template<class T>
T& Array<T>::operator[](int index)
{
	assert(index >= 0 && index < size);

	return arr[index];
}

template<class T>
void Array<T>::func()
{

}
