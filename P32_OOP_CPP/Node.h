#pragma once

template<class T, class TPri = int>
struct Node
{
	T value;
	Node* next;
	Node* prev;
	TPri priority;

	Node(T value): value(value), next(nullptr), prev(nullptr), priority(TPri()) {}
	Node(T value, TPri pri): value(value), next(nullptr), prev(nullptr), priority(pri) {}
};

