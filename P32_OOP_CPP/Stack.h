#pragma once
#include<iostream>

#include"Node.h"

using namespace std;

template<class T>
class Stack
{
	Node<T>* first = nullptr;
	int      size  = 0;

public:
	Stack();
	~Stack();

	// DZ
	Stack(const Stack& obj);
	Stack& operator=(const Stack& obj);

	void push(const T& value);
	void pop();
	T peek();
	bool isEmpty() const;
	void clear();
	int length() const;

	//=====================

	void print();
};

template<class T>
Stack<T>::Stack()
{
}

template<class T>
Stack<T>::~Stack()
{
	this->clear();
}

template<class T>
Stack<T>::Stack(const Stack& obj)
{
}

template<class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& obj)
{
	// TODO: вставьте здесь оператор return
}

template<class T>
void Stack<T>::push(const T& value)
{
	if (size == 0)
	{
		this->first = new Node<T>(value);
	}
	else
	{
		Node<T>* newNode = new Node<T>(value);
		newNode->next = first;
		this->first = newNode;
	}
	size++;
}

template<class T>
void Stack<T>::pop()
{
	if (size > 0)
	{
		Node<T>* temp = first;
		first = first->next;
		delete temp;
		size--;
	}
}

template<class T>
T Stack<T>::peek()
{
	return this->first->value;
}

template<class T>
bool Stack<T>::isEmpty() const
{
	return this->first == nullptr;
}

template<class T>
void Stack<T>::clear()
{
	Node<T>* temp = this->first;
	while (temp)
	{
		this->first = this->first->next;
		delete temp;
		temp = this->first;
	}
	size = 0;
}

template<class T>
int Stack<T>::length() const
{
	return this->size;
}

template<class T>
void Stack<T>::print()
{
	Node<T>* temp = this->first;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}
