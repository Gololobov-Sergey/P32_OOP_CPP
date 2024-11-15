#pragma once

template<class T>
class SmartPointer
{
	T* ptr;

public:
	SmartPointer(T* ptr) : ptr(ptr)
	{

	}

	~SmartPointer()
	{
		delete ptr;
	}
};

