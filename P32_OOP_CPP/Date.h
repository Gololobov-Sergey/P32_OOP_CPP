#pragma once
class Date
{
	int day;
	int month;
	int year;

public:
	Date();
	Date(int d, int m, int y);

	Date operator+(int n);
	void operator+=(int n);
	// > < >= <= == !=
	operator int(); // 1.01.1970;

	void print(); // 04.10.2024

	Date operator++(); 
	Date operator--();

};

