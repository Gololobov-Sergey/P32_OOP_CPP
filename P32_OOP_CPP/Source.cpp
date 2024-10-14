#include<iostream>

#include"Student.h"
#include"Fraction.h"
#include"Array.h"
#include"String.h"
#include"Stack.h"

using namespace std;

template<class T>
void func(Array<T> a)
{
	a.print();
}

int priority(char op)
{
	switch (op)
	{
	case '+': case'-': return 1;
	case '*': case'/': return 2;
	}
}

int calc(int a, int b, char op)
{
	switch (op)
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	}
}

int main()
{


	// 14.10.2024 ---------------------------------------

	/*Stack<int> s;
	s.push(10);
	s.push(13);
	s.push(11);
	s.push(18);
	s.print();
	s.pop();
	s.print();
	if (!s.isEmpty())
	{
		int a = s.peek();
		cout << a << endl;
	}
	s.clear();
	if (s.isEmpty())
	{
		cout << "Stack empty" << endl;
	}*/


	char expr[] = "3+2*4+3*4+5";
	Stack<int> number;
	Stack<char> oper;

	int i = 0;
	while (expr[i] != '\0')
	{
		if (isdigit(expr[i]))
			number.push(expr[i]-48);
		else
		{
			if (oper.isEmpty() || priority(expr[i]) <= priority(oper.peek()))
			{
				oper.push(expr[i]);
			}
			else
			{
				int a = number.peek();
				number.pop();
				int b = number.peek();
				number.pop();
				char op = oper.peek();
				oper.pop();
				int res = calc(a, b, op);
				number.push(res);
				oper.push(expr[i]);
			}
		}
		i++;
	}
	int cc = 9;


	/*Fraction f(2, 5);
	void* p = &f;
	cout << *((Fraction*)p) << endl;*/


	// 07.10.2024 ---------------------------------------

	/*Array<Fraction> a(10);
	a.set();
	a.print();*/

	//a[2] = 100;
	//cout << a[2] << endl;
	//func(a);

	//Array b(5);
	////
	//b = a;
	//b.print();

	//String s1("mama");
	//String s2("mama");
	//String s3 = s2 + s1;
	//cin >> s3;
	//cout << s3 << endl;
	//cout << s1.compare(s2) << endl;

	//if (s1 == s2)
	//{
	//	cout << "S1" << endl;
	//}
	//else
	//{
	//	cout << "S2" << endl;
	//}



	// 04.10.2024 ---------------------------------------

	// :: -> * sizeof ?:
	// + - * / % += -= *= /= %= 
	// ++ -- - +
	// !
	// > < >= <= == !=
	// = [] << >>

	/*Fraction f1(12, 3);
	Fraction f2(2, 5);*/
	//Fraction f3 = f1.add(f2);
	//Fraction f3 = f1 + f2; // f1.operator+(f2)
	//f3.info();

	////f3 = ++f1;
	//f3 = f1++;
	//f3.info();
	//f1.info();
	////f3 = f1++;

	//f2 += f1; // f3 = f3 + f1
	
	//f2.info();

	//float ff = f1;
	//cout << ff << endl;

	/*f2 = f2 + 10;
	f2 = 10 + f2;

	if (f1 > f2)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	int a = 5;
	int b;
	b = ++a;
	b = a++;
	if (a)
	{

	}*/
	


	// 30.09.2024 ---------------------------------------

	/*String s;
	s.print();
	s.set();
	s.print();*/
	


	/*int a = 5;
	int b(5.5);
	int c{ 5 };*/



	//const Array a(10);
	// a *= 10;
	//a.set();
	//a.show();
	////func(a);
	//a.show();

	//Array b(a);

	/*Fraction f;
	f.info();
	func(f);
	f.info();*/

	/*Student::setGroup(202);

	cout << Student::getGroup() << endl;

	Student s(1, "Vasya", 15);
	
	s.info();
	func(s);
	s.info();

	Student s2(2, "Olga", 15);

	cout << s.getGroup() << endl;
	cout << s2.getGroup() << endl;

	const int f(9);*/

	// 27.09.2024 ---------------------------------------

	//int* p;

	//{
	//    Array a(10);
	//    //Array a1;
	//    a.set();
	//    a.show();
	//    a.append(99);
	//    a.show();
	//    p = a.get();
	//    
	//}

	//cout << *p << endl;


	//Student st;

	//Student st1("Serg", 15);
	//st.age = 2000;

	//st.setAge(15);
	//st.setName("Serg");

	/*cout << st.getName() << endl;
	cout << st.getAge() << endl;*/

	//st.info(); // info(st);

	/*Fraction f1;
	Fraction f2;
	Fraction f3 = f1.add(f2);*/

}