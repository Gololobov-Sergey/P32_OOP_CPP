#pragma once
#include<iostream>

using namespace std;

class Fraction
{
private:
	int ch;
	int zn;

	int nsd(int a, int b) const
	{
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		return abs(a);
	}

	void sokr()
	{
		int a = nsd(ch, zn);
		ch /= a;
		zn /= a;
	}

public:

	Fraction() : ch(0), zn(1) {}

	Fraction(int ch, int zn) : ch(ch), zn(zn) { sokr(); }

	void input()
	{
		cout << "¬ведите числитель: ";
		cin >> ch;
		cout << "¬ведите знаменатель (не равный 0): ";
		cin >> zn;
		while (zn == 0)
		{
			cout << "«наменатель не может быть нулем!" << endl;
			cout << "¬ведите знаменатель (не равный 0): ";
			cin >> zn;
		}
		sokr();
	}

	void info()
	{
		cout << ch << "/" << zn << endl;
	}

	Fraction add(Fraction& a)
	{
		Fraction res;
		res.ch = ch * a.zn + a.ch * zn;
		res.zn = zn * a.zn;
		res.sokr();
		return res;
	}

	Fraction sub(Fraction& a)
	{
		Fraction res;
		res.ch = ch * a.zn - a.ch * zn;
		res.zn = zn * a.zn;
		res.sokr();
		return res;
	}

	Fraction mult(Fraction& a)
	{
		Fraction res;
		res.ch = ch * a.ch;
		res.zn = zn * a.zn;
		res.sokr();
		return res;
	}

	Fraction div(Fraction& a)
	{
		Fraction res;
		res.ch = ch * a.zn;
		res.zn = zn * a.ch;
		res.sokr();
		return res;
	}

	int getCh()
	{
		return ch;
	}

	int getZn()
	{
		return zn;
	}

	Fraction operator+(Fraction f)
	{
		int ch = this->ch * f.zn + f.ch * this->zn;
		int zn = this->zn * f.zn;
		return Fraction(ch, zn);
	}

	Fraction operator+(int n)
	{

	}

	Fraction operator-(Fraction f)
	{
		int ch = this->ch * f.zn - f.ch * this->zn;
		int zn = this->zn * f.zn;
		return Fraction(ch, zn);
	}

	Fraction operator-()
	{
		return Fraction(-ch, zn);
	}

	Fraction operator+()
	{
		cout << "Plus";
		return *this;
	}

	Fraction operator++() // pre
	{
		ch = ch + zn;
		return *this;
	}

	Fraction operator++(int) // postfix
	{
		Fraction f(ch, zn);
		ch = ch + zn;
		return f;
	}

	void operator+=(Fraction f)
	{
		*this = *this + f;
	}


	operator float()
	{
		return (float)ch / zn;
	}

	operator bool()
	{
		cout << "bool" << endl;
		return ch;
	}

	bool operator>(Fraction f)
	{
		return (float)ch / zn > (float)f.ch / f.zn;
	}

	bool operator<(Fraction f)
	{
		return (float)ch / zn < (float)f.ch / f.zn;
	}

	/*auto operator<=>(Fraction f)
	{
		return (float)ch / zn <=> (float)f.ch / f.zn;
	}*/

	bool operator==(Fraction f)
	{
		return (float)ch / zn == (float)f.ch / f.zn;
	}

	bool operator!()
	{
		return !ch;
	}

	friend ostream& operator<<(ostream& out, const Fraction& f);
};

Fraction operator+(int n, Fraction f2)
{
	return Fraction();
}

//Fraction operator+(Fraction f1, Fraction f2)
//{
//    int ch = f1.getCh() * f2.getZn() + f2.getCh() * f1.getZn();
//    int zn = f1.getZn() * f2.getZn();
//    return Fraction(ch, zn);
//}

ostream& operator<<(ostream& out, const Fraction& f)
{
	out << f.ch << "/" << f.zn << endl;
	return out;
}