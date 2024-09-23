#pragma once
class Fraction
{
	int ch;
	int zn;

public:

	Fraction add(Fraction f);

	void info();
};


Fraction Fraction::add(Fraction f)
{
	int a = ch + f.ch;
}
