#pragma once
#include<iostream>
#include<iomanip>
#include"Queue.h"

using namespace std;


enum DEPARTMENT
{
	TRANSPORT, ECONOMIST, DIRECTOR  
};

ostream& operator<<(ostream& out, const DEPARTMENT& d)
{
	switch (d)
	{
	case TRANSPORT: out << "TRANSPORT"; break;
	case ECONOMIST: out << "ECONOMIST"; break;
	case DIRECTOR:  out << "DIRECTOR"; break;
	}
	return out;
}


class Task
{
	string filename;
	int time;
	DEPARTMENT department;

public:
	Task(string fn, int time, DEPARTMENT dept):filename(fn), time(time), department(dept)
	{

	}

	int getTime()
	{
		return time;
	}

	DEPARTMENT getDepartment()
	{
		return department;
	}

	friend ostream& operator<<(ostream& out, const Task& t);
};


ostream& operator<<(ostream& out, const Task& t)
{
	out << setw(12) << left << t.department << setw(10) << left << t.filename << " " << t.time << endl;
	return out;
}

class PrintServer
{
	string ip;
	PriorityQueue<Task, DEPARTMENT> qPrint;
	Queue<Task> qStats;
	int leftTime = -1;
	Task* currentTask = nullptr;

public:
	PrintServer(string ip) : ip(ip) {}
	void addTask(Task task, DEPARTMENT dept)
	{
		qPrint.enqueue(task, dept);
	}

	void work()
	{
		if (!qPrint.isEmpty() && leftTime == -1)
		{
			currentTask = new Task(qPrint.peek());
			leftTime = currentTask->getTime();
			qPrint.dequeue();
		}

		system("cls");
		cout << "PrintServer : " << ip << endl;
		cout << "------------------------------" << endl;

		cout << "Printing:  left time - " << leftTime << endl;
		if (currentTask)
			cout << *currentTask << endl;
		else
			cout << endl;

		cout << endl;

		cout << "Waiting:" << endl;
		cout << "----------------------------" << endl;
		qPrint.print();

		leftTime--;


	}
};
