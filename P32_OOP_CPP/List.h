#pragma once
#include<iostream>
#include<initializer_list>

#include"Node.h"

using namespace std;

template<class T>
class List
{
	Node<T>* first = nullptr;
	Node<T>* last = nullptr;
	int      size = 0;

	Node<T>* getNode(int index);

public:
	List();
	List(initializer_list<T> list);
	~List();
	List(const List& list);
	List& operator=(const List& list);

	void push_front(const T& value);
	void push_back(const T& value);
	void insert(const T& value, int index);

	void print();

	/*void pop_front();
	void pop_back();
	void remove(int index);

	T front();
	T back();
	T at(int index);

	T& operator[](int index);

	void clear();
	
	int length();

	List operator+(const List& list);
	void operator+=(const List& list);
	int find(const T& value);*/

};

template<class T>
Node<T>* List<T>::getNode(int index)
{
	Node<T>* pos;
	if (index < size / 2)
	{
		pos = first;
		for (size_t i = 0; i < index; i++)
		{
			pos = pos->next;
		}
	}
	else
	{
		pos = last;
		for (size_t i = 0; i < size-index-1; i++)
		{
			pos = pos->prev;
		}
	}
	return pos;
}

template<class T>
List<T>::List()
{
}

template<class T>
List<T>::List(initializer_list<T> list)
{
	for (T elem : list)
	{
		push_back(elem);
	}
}

template<class T>
List<T>::~List()
{
	//clear();
}

template<class T>
List<T>::List(const List& list)
{
}

template<class T>
List<T>& List<T>::operator=(const List<T>& list)
{
	// TODO: вставьте здесь оператор return
}

template<class T>
void List<T>::push_front(const T& value)
{
	if (size == 0)
	{
		first = last = new Node<T>(value);
	}
	else
	{
		first->prev = new Node<T>(value);
		first->prev->next = first;
		first = first->prev;
	}
	size++;
}

template<class T>
void List<T>::push_back(const T& value)
{
	if (size == 0)
	{
		first = last = new Node<T>(value);
	}
	else
	{
		last->next = new Node<T>(value);
		last->next->prev = last;
		last = last->next;
	}
	size++;
}

template<class T>
void List<T>::insert(const T& value, int index)
{
	if (index == 0)
	{
		push_front(value);
	}
	else if (index == size)
	{
		push_back(value);
	}
	else
	{
		Node<T>* pos = getNode(index - 1);
		Node<T>* newNode = new Node<T>(value);
		pos->next->prev = newNode;
		newNode->next = pos->next;
		pos->next = newNode;
		newNode->prev = pos;
		size++;
	}
}

template<class T>
void List<T>::print()
{
	Node<T>* temp = this->first;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}
