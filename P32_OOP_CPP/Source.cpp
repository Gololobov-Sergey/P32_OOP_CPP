#include<iostream>

#include"Student.h"
#include"Fraction.h"

using namespace std;

int main()
{
    Student st;
    //st.age = 2000;

    st.setAge(15);
    st.setName("Serg");

    /*cout << st.getName() << endl;
    cout << st.getAge() << endl;*/

    st.info(); // info(st);

    Fraction f1;
    Fraction f2;
    Fraction f3 = f1.add(f2);

}