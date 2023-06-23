#include<iostream>
using namespace std;

class student {
    public:
int roll_no;
int age;
};

int main()
{
// statically creating obj
student s1;
s1.roll_no=11;
s1.age=13;

// dynamically creating obj and assiging value
student *s2= new student ;
(*s2).roll_no=12;
(*s2).age=14;
// we can also use arrow opperator
// s2->roll_no=12;
// s2->age=14;
cout<<s1.roll_no<<endl;
cout<<s1.age<<endl;
return 0;
}
