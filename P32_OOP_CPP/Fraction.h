#pragma once
class Fraction
{
	int ch;
	int zn;

public:

	Fraction()
	{
		ch = 8;
		zn = 13;
	}

	Fraction add(Fraction f);

	void info();
};


Fraction Fraction::add(Fraction f)
{
	int a = this->ch + f.ch;
	return Fraction();
}

void Fraction::info()
{
	cout << ch << "/" << zn << endl;
}
