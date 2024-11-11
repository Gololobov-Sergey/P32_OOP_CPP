#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class MyException
{
	string date;
	int line;
	string time;
	string file;
	string error;

	string message;

	string path = "logs.txt";

public:

	MyException(string d, string t, string f, int l, string e):date(d), time(t), line(l), error(e), file(f)
	{
		message = date + " | " + time + " | " + file + " | " + to_string(l) + " | " + error;
	}

	void saveLog()
	{
		ofstream f(path, ios::app);
		f << message << endl;
		f.close();
	}

	string getError()
	{
		return message;
	}
};

