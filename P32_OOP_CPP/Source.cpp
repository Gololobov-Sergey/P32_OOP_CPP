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
#include"WarOfWorld.h"
#include"MyException.h"
#include"NS.h"
#include"TestSystem.h"
#include"SmartPointer.h"
#include<vector>
#include<algorithm>
#include<list>
#include <conio.h>
#include <map>

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


void print(Animal* c)
{
	c->voice();
}

void ffff()
{
	SmartPointer<Student> s(new Student(2, "Vasya"));
	//

	unique_ptr<Student> p = make_unique<Student>(2, "Vasya");

	unique_ptr<Student> p1 = make_unique<Student>(2, "Vasya");

	p1 = move(p);

	shared_ptr<Student>p3 = make_shared<Student>(2, "Vasya");

	p.get()->info();

	int a;
	cin >> a;
	if (a == 0)
		throw "Error";

	///


}

template<class Container>
void print(Container c)
{
	for (auto el : c)
	{
		cout << el << " ";
	}
	cout << endl;
}


int main()
{
	SetConsoleOutputCP(1251);


	vector<int> v({ 1,3,6,9,8,65,-4,32,4,78 });
	print(v);
	for_each(v.begin(), v.end(), [](int& a) { a *= 2; });
	/*for (size_t i = 0; i < v.size(); i++)
	{
		v[i] *= 2;
	}*/
	print(v);
	cout << all_of(v.begin(), v.end(), [](int a) { return a > 0; }) << endl;

	auto i = find(v.begin(), v.end(), 8);
	cout << *i << endl;
	int p = distance(i, v.begin());
	cout << p << endl;


	/*TestSystem t;
	t.menu();*/

	/*string password = "";
	char c;
	while ((c = _getch()) != '\r')
	{
		password += c;
		std::cout << "*";
	}
	cout << password << endl;*/


	/*int b = 9, c = 99;
	auto f = [=, &c](int a) {cout << a << " " << b++ << endl; };
	f(1);*/

	/*map<string, string> m;
	m["1"] = "mama";
	m["one"] = "papa";
	m.insert(pair{ "10", "sdf" });
	m["1"] = "baba";
	auto i = m.begin();
	for (auto i : m)
	{
		cout << i.first << " " << i.second << endl;
	}

	auto ii = m.find("one");
	cout << (*ii).second << endl;*/


	/*vector<int> v({ 1,3,6,9,8,65,4,32,4,78 });

	list<int> l(v.begin()+2, v.begin()+8);
	for (int a : l)
	{
		cout << a << " ";
	}
	cout << endl;

	auto i = l.begin();
	advance(i, 3);
	l.insert(i, 999);
	for (int a : l)
	{
		cout << a << " ";
	}
	cout << endl;*/


	//list<Fraction> lf;
	//lf.emplace_back(2, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(3, 5);
	//lf.emplace_back(1, 5);
	//lf.emplace_back(4, 5);
	//print(lf);
	///*lf.erase(next(lf.begin(), 2));
	//print(lf);*/

	//list<Fraction> lf1;
	//lf1.emplace_back(2, 5);
	//lf1.emplace_back(3, 5);
	//lf1.emplace_back(1, 5);
	//lf1.emplace_back(4, 5);

	//lf.insert(lf.end(), next(lf1.begin(), 1), next(lf1.begin(), 3));
	//print(lf);

	//lf.remove_if([](Fraction f) { return f == Fraction(3, 5); });
	//print(lf);

	//lf.sort();
	//print(lf);
	//lf.unique();
	//print(lf);



	/*cout << v.capacity() << endl;
	cout << v.max_size() << endl;
	v.insert(v.begin() + 3, 9999);
	cout << v.capacity() << endl;

	for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;


	erase_if(v, [](int a) { return a < 5; });

	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<Student> vs;
	vs.emplace(vs.begin(), 2, "Vasya");*/

	/*int* aa = new int[]{ 12,3,3,45,6,8,9,7,6,54,3 };

	bubbleSort(aa, 11, [](int a, int b) { return a > b; });*/

	/*string st;
	getline(cin, st);
	hash<string> h;
	int a = h(st);
	cout << a << endl;*/



	// 11.11.2024 ---------------------------------------

	/*Animal* c = new Cat("Tom", 3, 5);
	print(c);*/

	//cout << c->getType() << endl;


	/*namespace GOO = BOO::DOO;
	
	FOO::foo();
	BOO::foo();
	GOO::foo();

	std::cout << "";

	free(nullptr);

	using std::cout;*/


	

	//try
	//{
	//	int a, b;
	//	cin >> a >> b;
	//	if (b != 0)
	//		cout << a / b << endl;
	//	else
	//		throw MyException(__DATE__, __TIME__, __FILE__, __LINE__, "Ivalid argument (b = 0)");
	//}
	//catch (int a)
	//{

	//}
	//catch (MyException& ex)
	//{
	//	ex.saveLog();
	//	cout << ex.getError() << endl;
	//}
	//catch (const exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}
	//catch (...)
	//{
	//	cout << "Fatal Error" << endl;
	//}







	/*WarOfWorld war(5);
	war.game();*/


	// 04.11.2024 ---------------------------------------


	/*Animal* c = new Cat("Tom", 3, 5);
	cout << c->getType() << endl;
	Cat* cc = dynamic_cast<Cat*>(c);
	if(cc)
		cc->cathMouse();

	delete c;*/

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