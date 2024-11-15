#pragma once
#include<iostream>
#include<string>

using namespace std;

class User
{
	string login;
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
		cout << "��� ���� ���� �����" << endl;
	}
};


class Student1 : public User
{
	//

public:
	Student1(string l) : User(l) {}

	virtual void menu() override
	{
		cout << "��� ���� ���� ��������" << endl;
	}
};


class TestSystem
{
	User* user;

public:

	void login()
	{
		string login;
		getline(cin, login);
		if (login == "admin")
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