#pragma once
#include<iostream>

using namespace std;

class People
{
	int time = 0;

public:

	void addTime();
	int getTime();
};


void People::addTime()
{
	time++;
}

int People::getTime()
{
	return time;
}



class Bus
{
	string number;
	int free_passenger;

public:
	Bus(string number);
	int getFreePass();
	void setFreePass(int pass);
};

Bus::Bus(string number)
{

}