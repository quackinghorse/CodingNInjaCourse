#include <iostream>
using namespace std;

class student
{
public:
    int age;
    const int rollNo;
    int &x; //  refrences age 

    // default constructor
    student(int r,int age) : rollNo(r), age(age), x(this->age=(age))
    {
       // rollNo = r;
    }
};
int main()
{
    student s1(101,43);
    s1.age = 20;
    //s1.rollNo=101;
    return 0;
}