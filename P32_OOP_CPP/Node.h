#pragma once

template<class T>
struct Node
{
	T value;
	Node* next;

	Node(T value, Node* n = nullptr): value(value), next(n){}
};

