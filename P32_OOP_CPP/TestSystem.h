#pragma once
#include<iostream>
#include<string>

using namespace std;

class User
{
	string login;
	string password;

	//

public:
	User(string l) :login(l) {}

	virtual void menu() = 0;
};


class Admin : public User
{
	//

public:
	Admin(string l) : User(l) {}

	virtual void menu() override
	{
		cout << "Тут буде меню Адміна" << endl;
	}
};


class Student1 : public User
{
	//

public:
	Student1(string l) : User(l) {}

	virtual void menu() override
	{
		cout << "Тут буде меню Студента" << endl;
	}
};


class TestSystem
{
	User* user;

public:

	void menu()
	{
		cout << "1.Register\n2.Login\n3.Exit\n";
		int c;
		cin >> c;
		cin.ignore();
		switch (c)
		{
		case 0:
			reg();
			break;
		case 1:
			login(); break;
		case 2: exit(0);
		default:
			break;
		}
	}

	void reg()
	{

	}

	void login()
	{
		string login;
		getline(cin, login);



		if (login == "admin" /*&& ...*/)
		{
			user = new Admin(login);
		}
		else if (login == "student")
		{
			user = new Student1(login);
		}

		user->menu();
	}
};