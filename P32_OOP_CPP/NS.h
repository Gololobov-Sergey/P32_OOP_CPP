#pragma once
#include<iostream>


using namespace std;

namespace FOO
{
	void foo()
	{
		cout << "Foo" << endl;
	}
}


namespace BOO
{
	void foo()
	{
		cout << "Foo1" << endl;
	}

	namespace DOO
	{
		void foo()
		{
			cout << "Doo1" << endl;
		}
	}
}
