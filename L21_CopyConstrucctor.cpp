#include <iostream>
using namespace std;
class student
{

public:
    int age;
    int roll_no;

    void display()
    {
        cout << age << " " << roll_no << endl;
    }

    student()
    {
        cout << " Constructor is called" << endl;
    }
    student(int r)
    {
        cout << "Parametrised Constructor gets called here" << endl;
        roll_no = r;
    }

    student(int a, int b)
    {
        cout << "Constructor 3 is called" << endl;
        age = a;
        roll_no = b;
    }
    //  student(int roll_no)
    // {
    //     cout << "This:" << this << endl;
    //     cout << "This case " << endl;
    //     this->roll_no = roll_no;
    // }

    // int getAge()
    // {
    //     return age;
    // }
    // void setAge(int a)
    // {
    //     cout << a << endl;
    // }
};

int main()
{

    student s1(10, 1002);
    s1.display();
    student s2(s1);
    s2.display();

    student *s3 = new student(100, 1008);
    s3->display();
    student s4(*s3);
    s4.display();
    student *s5 = new student(s1);
    s5->display();

    // copy assigment opperator
    student s6(10, 7);
    student s7(11, 12);
    cout << "After using copy assignment opperator" << endl;
    s6 = s7;
    s6.display();
    s7.display();
    student *s8 = new student(1, 2);
    s8->display();
    student s9;
    s9 = (*s8);

    s9.display();
    return 0;
}