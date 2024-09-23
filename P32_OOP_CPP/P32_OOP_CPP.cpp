
#include <iostream>

#include"Student.h"

using namespace std;

int main()
{
    Student st;
    //st.age = 2000;

    st.setAge(15);
    st.setName("Serg");

    /*cout << st.getName() << endl;
    cout << st.getAge() << endl;*/

    st.info();
    
}
