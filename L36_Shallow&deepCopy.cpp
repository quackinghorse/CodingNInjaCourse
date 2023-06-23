#include<iostream>
using namespace std;

class Student {
    int age ;
char name[5];
public :
Student(int age , char * name ) {
    this ->age = age ;
    // shallow copy
    this -> name = name ;
    void display();
}
};

void Student :: display() {
cout<<age<<" "<<name<<endl;
}
int main()
{
    char name[5] ="abcd";
Student s1(10 , name );

return 0;
}