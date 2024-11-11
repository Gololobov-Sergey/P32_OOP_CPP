#pragma once
#include<iostream>

#include"List.h"

using namespace std;

class Skill
{

};

class LowHealthSkill : public Skill
{

};


class Warrior
{
	int hp;
	int damage;

	Skill* _skill;

public:

	Warrior(int hp, int damage, Skill* sk = nullptr) : hp(hp), damage(damage), _skill(sk) { }

	int getHP()
	{
		return hp;
	}

	int getDamage()
	{
		return damage;
	}

	void setHP(int hp)
	{
		this->hp = hp;
	}

	void setDamage(int damage)
	{
		this->damage = damage;
	}

	virtual ostream& print(ostream& out) const
	{
		out << "HP : " << hp << ", Damage : " << damage << endl;
		return out;
	}

	friend ostream& operator<<(ostream& out, const Warrior* war);

	virtual void skill() = 0;
};


ostream& operator<<(ostream& out, const Warrior* war)
{
	return war->print(out);
}

class Light : public Warrior
{
public:
	Light(int hp, int damage) : Warrior(hp, damage)	{ }
};


class Dark : public Warrior
{
public:
	Dark(int hp, int damage) : Warrior(hp, damage) { }
};


class Crossbowman : public Light
{
public:

	Crossbowman(int hp, int damage) : Light(hp, damage)	{ }

	virtual ostream& print(ostream& out) const override 
	{
		out << "Crossbowman -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{

	}
};

class Swordsman : public Light
{
public:

	Swordsman(int hp, int damage) : Light(hp, damage) { }

	virtual ostream& print(ostream& out) const override
	{
		out << "Swordsman   -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{

	}
};

class Horseman : public Light
{
public:

	Horseman(int hp, int damage) : Light(hp, damage) { }

	virtual ostream& print(ostream& out) const override
	{
		out << "Horseman    -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{

	}
};


class Ork : public Dark
{
public:

	Ork(int hp, int damage) : Dark(hp, damage) { }

	virtual ostream& print(ostream& out) const override
	{
		out << "Ork         -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{

	}
};

class Zombie : public Dark
{
public:

	Zombie(int hp, int damage) : Dark(hp, damage) { }

	virtual ostream& print(ostream& out) const override
	{
		out << "Zombie      -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{
		if (getHP() > 0)
		{
			int healing = (getDamage() * 20) / 100;
			this->setHP(getHP() + healing);
		}

	}
};

class Skeleton : public Dark
{
public:

	Skeleton(int hp, int damage) : Dark(hp, damage) { }

	virtual ostream& print(ostream& out) const override
	{
		out << "Skeleton    -> ";
		return Warrior::print(out);
	}

	virtual void skill() override
	{

	}
};


class WarOfWorld
{
	List<Light*> lights;
	List<Dark*> darks;

public:

	WarOfWorld(int size)
	{ 
		Light* l = nullptr;
		for (size_t i = 0; i < size; i++)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0: l = new Crossbowman(rand() % 31 + 50, rand() % 26 + 10); break;
			case 1: l = new Horseman(rand() % 31 + 50, rand() % 26 + 10); break;
			case 2: l = new Swordsman(rand() % 31 + 50, rand() % 26 + 10); break;
			}
			lights.push_back(l);
		}

		Dark* d = nullptr;
		for (size_t i = 0; i < size; i++)
		{
			int c = rand() % 3;
			switch (c)
			{
			case 0: d = new Zombie(rand() % 31 + 50, rand() % 26 + 10); break;
			case 1: d = new Ork(rand() % 31 + 50, rand() % 26 + 10); break;
			case 2: d = new Skeleton(rand() % 31 + 50, rand() % 26 + 10); break;
			}
			darks.push_back(d);
		}
	}

	void print()
	{
		system("cls");
		cout << "------- Lights -------" << endl;
		lights.print();

		gotoxy(45, 0);
		cout << "------- Darks  -------";
		darks.print(45, 1);
	}

	Warrior* fight(Warrior* w1, Warrior* w2)
	{
		w1->setHP(w1->getHP() - w2->getDamage());
		w1->skill();
		if (w1->getHP() < 0)
		{
			return w1;
		}
		w2->setHP(w2->getHP() - w1->getDamage());
		if (w2->getHP() < 0)
		{
			return w2;
		}
		return nullptr;
	}

	void game()
	{
		while (lights.length() != 0 || darks.length() != 0)
		{
			int index1 = rand() % lights.length();
			Light* l = lights[index1];

			int index2 = rand() % darks.length();
			Dark* d = darks[index2];

			Warrior* lose = fight(l, d);
			if (lose == l)
			{
				Swordsman* sm = dynamic_cast<Swordsman*>(l);
				if (sm)
				{
					for (size_t i = 0; i < lights.length(); i++)
					{
						lights[i]->setHP(lights[i]->getHP() + 10);
					}
				}
				
				lights.remove(index1);
			}
			else if(lose == d)
			{
				darks.remove(index2);
			}

			print();
			system("pause");
		}
	}
};

