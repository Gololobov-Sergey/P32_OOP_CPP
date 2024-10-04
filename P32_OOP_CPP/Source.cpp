#include<iostream>

#include"Student.h"
#include"Fraction.h"
#include"Array.h"
#include"String.h"

using namespace std;

void func(String a)
{
	a.print();
}

int main()
{

	// 04.10.2024 ---------------------------------------

	// :: -> * sizeof ?:
	// + - * / % += -= *= /= %= 
	// ++ -- - +


	Fraction f1(1, 3);
	Fraction f2(2, 5);
	//Fraction f3 = f1.add(f2);
	Fraction f3 = f1 + f2; // f1.operator+(f2)
	f3.info();

	f3 = +f1;
	
	f3.info();

	int a = 5;
	int b;
	b = +a;
	


	// 30.09.2024 ---------------------------------------

	/*String s;
	s.print();
	s.set();
	s.print();*/
	


	/*int a = 5;
	int b(5.5);
	int c{ 5 };*/



	//const Array a(10);
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