#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:

// destructor

~student() {
cout<<"destrutor is called"<<endl;
}
    int roll_no;

    void display()
    {
        cout << age << " " << roll_no << endl;
    }

    // default constructor
    student()
    {
        cout << " Constructor is called" << endl;
    }

    // parametrised consturctor
    // student(int r) {
    //     cout<<"Parametrised Constructor gets called here"<<endl;
    //     roll_no=r;
    // }
    student(int roll_no)
    {
        cout << "This:" << this << endl;
        cout << "This case " << endl;
       this-> roll_no = roll_no;
    }

    student(int a, int b)
    {
        cout << "this:" << this << endl;
        cout << "Constructor 3 is called" << endl;
        age = a;
        roll_no = b;
    }

    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        cout << a << endl;
    }
};
int main()
{

    // student s1;

    // s1.display();
    // student *s2= new student;
    // s2->display();

    student s3(10); // now here parametrised constructor gets called not default constructor as we have passed n argunment to distiguish it from default constructor
    cout << "address of s3:" << &s3 << endl;
    s3.display();
    student *s4= new student(21);
    s4->display();

    student *s5= new student(12,13);
    cout<<&s5<<endl;
    s5->display();
    return 0;
       // delete s4;
       // delete s5;
}