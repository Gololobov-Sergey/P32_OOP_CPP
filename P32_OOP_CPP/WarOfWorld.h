#pragma once
#include<iostream>

#include"List.h"

using namespace std;

class Warrior
{
	int hp;
	int damage;
};


class Light : public Warrior
{

};


class Dark : public Warrior
{

};


class Ñrossbowman : public Light
{

};

class Swordsman : public Light
{

};

class Horseman : public Light
{

};


class Ork : public Dark
{

};

class Zombie : public Dark
{

};

class Skeleton : public Dark
{

};


class WarOfWorld
{
	List<Light*> lights;
	List<Dark*> darks;

public:

	WarOfWorld(int size)
	{

	}

	void game();
};

