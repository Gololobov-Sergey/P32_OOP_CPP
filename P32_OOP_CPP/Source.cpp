#include<iostream>
#include<Windows.h>

#include"Student.h"
#include"Fraction.h"
#include"Array.h"
#include"String.h"
#include"Stack.h"
#include"Queue.h"
#include"BusStation.h"
#include"Staple.h"
#include"PrintServer.h"
#include"ForwardList.h"
#include"List.h"
#include"BTree.h"
#include"Relation.h"
#include"Inherit.h"
#include"Zoo.h"

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
	case '^':          return 3;
	}
}

int calc(int a, int b, char op)
{
	switch (op)
	{
	case '+': return a + b;
	case '-': return b - a;
	case '*': return a * b;
	case '/': return b / a;
	case '^': return pow(b, a);
	}
}

void incTime(People& p)
{
	p.addTime();
}


class Protocol
{
	string number;
	string date;
	int summa;
	bool isPay;
};


int main()
{

	// 04.11.2024 ---------------------------------------


	Animal* c = new Cat("Tom", 3, 10);
	cout << c->getType() << endl;
	delete c;

	////Animal* a = new Animal("Animal", 5);
	//Animal* c = new Cat("Tom", 3, 10);
	//Animal* sc = new SiamCat("Murka", 3, 10);
	//Animal* d = new Dog("Spike", 7);
	//Animal* r = new Ravlik("Fedya", 1);

	//Animal* an[] = { c, d, sc };

	//for (size_t i = 0; i < 4; i++)
	//{
	//	cout << an[i]->getType() << endl;
	//	cout << an[i]->voice() << endl;
	//}

	/*cout << a->getType() << endl;
	cout << a->voice() << endl;

	cout << c->getType() << endl;
	cout << c->voice() << endl;

	cout << d->getType() << endl;
	cout << d->voice() << endl;*/


	// 01.11.2024 ---------------------------------------


	/*Human h;*/
	
	
	
	/*Teacher t("Vasya", 30, 1000);
	t.info();
	

	A a;
	a.A1();
	
	B b;
	b.A11();*/
	
	
	/*BitString b1("100");
	BitString b2("110");
	BitString b3 = b1 + b2;
	cout << b3 << endl;*/
	// 1100
	


	/*Composition::Car car;
	car.move();*/

	/*Agregation::Engine* en1;
	{
		Agregation::Engine* en = new Agregation::Engine;
		Agregation::Car car2(en);
		car2.move();
		en1 = car2.getEngine();
	}*/

	//en1->start();

	// 28.10.2024 ---------------------------------------



	//BTree<string, List<Protocol>*> base;


	/*BTree<int, int> b;
	cout << b.push_r(10, 10) << endl;
	cout << b.push_r(1, 1) << endl;
	cout << b.push_r(5, 5) << endl;
	cout << b.push_r(20, 20) << endl;
	cout << b.push_r(15, 15) << endl;

	b.print();

	b.remove(10);

	b.print();*/

	// 25.10.2024 ---------------------------------------

	/*List<int> l;
	l.push_back(10);
	l.push_back(40);
	l.push_back(50);
	l.push_back(70);
	l.print();
	l.insert(100, 1);
	l.remove(2);
	
	l.print();*/



	//ForwardList<int> fl;
	///*fl.push_back(10);
	//fl.push_back(20);
	//fl.print();

	//fl.push_front(30);
	//fl.print();

	//fl.insert(40, 2);
	//fl.print();*/

	///*fl.pop_back();
	//fl.print();

	//fl.pop_front();
	//fl.print();*/

	//fl.remove(2);
	//fl.print();

	/*string file[] = { "file1.doc", "file2.xls", "file3.txt", "file4.pdf" };


	PrintServer ps("10.6.6.152");
	int i = 0;
	while (true)
	{
		if (i % 7 == 0)
		{
			Task task(file[rand() % 4], rand() % 4 + 4, (DEPARTMENT)(rand() % 3));
			ps.addTask(task, task.getDepartment());
		}
		ps.work();
		i++;
		Sleep(500);
	}*/



	/*PriorityQueue<int> q;
	q.enqueue(10, 2);
	q.enqueue(5, 3);
	q.enqueue(15, 1);
	q.print();
	q.enqueue(11, 4);
	q.enqueue(11, 3);
	q.print();
	cout << q.peek() << endl;*/

	// 18.10.2024 ---------------------------------------


	//Queue<People> p;
	/*p.enqueue(People());
	p.enqueue(People());
	p.enqueue(People());
	p.enqueue(People());
	p.enqueue(People());

	p.for_each(addTime);*/



	//PriorityQueue<People> pp;

	/*int i = 0;
	while (true)
	{
		if (i % 2 == 0)
		{
			p.enqueue(People());
		}

		if (i % 10 == 0)
		{
			
		}

		p.for_each(incTime);
		i++;
		Sleep(1000);
	}*/



	/*Queue<int> q = { 1,3,5,7,9 };
	q.print();
	q.enqueue(99);
	q.print();
	q.dequeue();
	q.print();
	q.ring();
	q.ring();
	q.print();
	q.clear();
	q.print();*/


	// 14.10.2024 ---------------------------------------

	/*Stack<int> s;
	s.push(10);
	s.push(13);
	s.push(11);
	s.push(18);
	s.print();
	s.pop();
	s.print();*/
	/*if (!s.isEmpty())
	{
		int a = s.peek();
		cout << a << endl;
	}
	s.clear();
	if (s.isEmpty())
	{
		cout << "Stack empty" << endl;
	}*/


	/*char expr[] = "2+2*4^2+2";
	Stack<int> number;
	Stack<char> oper;

	int i = 0;
	while (expr[i] != '\0')
	{
		if (isdigit(expr[i]))
			number.push(expr[i]-48);
		else
		{
			if (oper.isEmpty())
			{
				oper.push(expr[i]);
			}
			else
			{
				if (priority(expr[i]) <= priority(oper.peek()))
				{
					while (priority(expr[i]) < priority(oper.peek()))
					{
						int a = number.peek();
						number.pop();
						int b = number.peek();
						number.pop();
						char op = oper.peek();
						oper.pop();
						int res = calc(a, b, op);
						number.push(res);
						
					}
					oper.push(expr[i]);
				}
				else
				{
					oper.push(expr[i]);
				}
			}
		}
		i++;
	}

	while (!oper.isEmpty())
	{
		int a = number.peek();
		number.pop();
		int b = number.peek();
		number.pop();
		char op = oper.peek();
		oper.pop();
		int res = calc(a, b, op);
		number.push(res);
	}

	cout << expr << " = " << number.peek() << endl;*/

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