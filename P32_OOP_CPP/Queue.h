#pragma once
#include<iostream>
#include<initializer_list>

#include"Node.h"

using namespace std;

template<class T>
class Queue
{
	Node<T>* first = nullptr;
	Node<T>* last  = nullptr;
	int      size  = 0;

public:

	Queue();
	Queue(initializer_list<T> list);
	~Queue();

	Queue(const Queue& q);
	Queue& operator=(const Queue& q);

	void enqueue(const T& value);
	void dequeue();
	T peek();
	int length();
	void print();
	void clear();
	bool isEmpty();

	void ring();

	void for_each(void(*method)(T&));
};

template<class T>
Queue<T>::Queue()
{
}

template<class T>
Queue<T>::Queue(initializer_list<T> list)
{
	for (T elem : list)
	{
		this->enqueue(elem);
	}
}

template<class T>
Queue<T>::~Queue()
{
	this->clear();
}

template<class T>
Queue<T>::Queue(const Queue<T>& q)
{
}

template<class T>
Queue<T>& Queue<T>::operator=(const Queue<T>& q)
{
	// TODO: вставьте здесь оператор return
}

template<class T>
void Queue<T>::enqueue(const T& value)
{
	if (this->size == 0)
	{
		this->first = this->last = new Node<T>(value);
	}
	else
	{
		this->last->next = new Node<T>(value);
		this->last = this->last->next;
	}
	size++;
}

template<class T>
void Queue<T>::dequeue()
{
	if (this->size > 0)
	{
		Node<T>* temp = this->first;
		this->first = this->first->next;
		delete temp;
		size--;
	}
}

template<class T>
T Queue<T>::peek()
{
	return this->first->value;
}

template<class T>
int Queue<T>::length()
{
	return size;
}

template<class T>
void Queue<T>::print()
{
	Node<T>* temp = this->first;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

template<class T>
void Queue<T>::clear()
{
	Node<T>* temp = this->first;
	while (temp)
	{
		this->first = this->first->next;
		delete temp;
		temp = this->first;
	}
	this->last = nullptr;
	size = 0;
}

template<class T>
bool Queue<T>::isEmpty()
{
	return this->first == nullptr;
}

template<class T>
void Queue<T>::ring()
{
	/*T val = this->peek();
	dequeue();
	enqueue(val);*/

	last->next = first;
	first = first->next;
	last = last->next;
	last->next = nullptr;
}

template<class T>
void Queue<T>::for_each(void(*method)(T&))
{
	Node<T>* temp = this->first;
	while (temp)
	{
		method(temp->value);
		temp = temp->next;
	}
}



/////// Priority Queue /////////

template<class T, class TPri = int>
class PriorityQueue
{
	Node<T, TPri>* first = nullptr;
	Node<T, TPri>*  last = nullptr;
	int             size = 0;

public:
	PriorityQueue();
	//PriorityQueue(initializer_list<T> list);
	~PriorityQueue();

	PriorityQueue(const PriorityQueue& q);
	PriorityQueue& operator=(const PriorityQueue& q);

	void enqueue(const T& value, TPri pri);
	void dequeue();
	T    peek();
	int  length();
	void print();
	void clear();
	bool isEmpty();

	void for_each(void(*method)(T&));
};

template<class T, class TPri>
PriorityQueue<T, TPri>::PriorityQueue()
{
}

template<class T, class TPri>
PriorityQueue<T, TPri>::~PriorityQueue()
{
	this->clear();
}

template<class T, class TPri>
PriorityQueue<T, TPri>::PriorityQueue(const PriorityQueue<T, TPri>& q)
{
}

template<class T, class TPri>
PriorityQueue<T, TPri>& PriorityQueue<T, TPri>::operator=(const PriorityQueue<T, TPri>& q)
{
	return PriorityQueue<T, TPri>();
}

template<class T, class TPri>
void PriorityQueue<T, TPri>::enqueue(const T& value, TPri pri)
{
	Node<T, TPri>* newNode = new Node<T, TPri>(value, pri);

	if (size == 0)
	{
		first = last = newNode;
		size++;
		return;
	}

	if (pri <= last->priority)
	{
		last->next = newNode;
		last = newNode;
	}
	else if (pri > first->priority)
	{
		newNode->next = first;
		first = newNode;
	}
	else
	{
		Node<T, TPri>* pos = first;
		while (pri <= pos->next->priority)
		{
			pos = pos->next;
		}
		newNode->next = pos->next;
		pos->next = newNode;
	}
	size++;
}

template<class T, class TPri>
void PriorityQueue<T, TPri>::dequeue()
{
	if (this->size > 0)
	{
		Node<T, TPri>* temp = this->first;
		this->first = this->first->next;
		delete temp;
		size--;
	}
}

template<class T, class TPri>
T PriorityQueue<T, TPri>::peek()
{
	return this->first->value;
}

template<class T, class TPri>
int PriorityQueue<T, TPri>::length()
{
	return size;
}

template<class T, class TPri>
void PriorityQueue<T, TPri>::print()
{
	Node<T, TPri>* temp = this->first;
	while (temp)
	{
		//cout << temp->value << "(" << temp->priority << ") ";
		cout << temp->value; // for Task
		temp = temp->next;
	}
	//cout << endl;
}

template<class T, class TPri>
void PriorityQueue<T, TPri>::clear()
{
	Node<T, TPri>* temp = this->first;
	while (temp)
	{
		this->first = this->first->next;
		delete temp;
		temp = this->first;
	}
	this->last = nullptr;
	size = 0;
}

template<class T, class TPri>
bool PriorityQueue<T, TPri>::isEmpty()
{
	return this->first == nullptr;
}

template<class T, class TPri>
void PriorityQueue<T, TPri>::for_each(void(*method)(T&))
{
	Node<T, TPri>* temp = this->first;
	while (temp)
	{
		method(temp->value);
		temp = temp->next;
	}
}
