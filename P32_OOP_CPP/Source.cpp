#include<iostream>

#include"Student.h"
#include"Fraction.h"
#include"Array.h"

using namespace std;

int main()
{

    // 27.09.2024 ---------------------------------------

    int* p;

    {
        Array a(10);
        //Array a1;
        a.set();
        a.show();
        a.append(99);
        a.show();
        p = a.get();
        
    }

    cout << *p << endl;


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