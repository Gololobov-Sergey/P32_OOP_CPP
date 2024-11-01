#pragma once
#include<iostream>

using namespace std;

namespace Composition
{
	class Engine 
	{
	public:
		void start()
		{
			cout << "Engine started" << endl;
		}
	};

	class Car 
	{
		Engine engine;

	public:
		void move()
		{
			engine.start();
		}
	};
}


namespace Agregation
{
	class Engine
	{
		int cilinder = 4;
	public:
		void start()
		{
			cout << "Engine started" << endl;
			cout << cilinder << endl;
		}
	};

	class Car
	{
		Engine* engine;

	public:
		Car()
		{
			engine = new Engine;
		}

		~Car()
		{
			delete engine;
		}

		void move()
		{
			engine->start();
		}

		Engine* getEngine()
		{
			return engine;
		}
	};

}
