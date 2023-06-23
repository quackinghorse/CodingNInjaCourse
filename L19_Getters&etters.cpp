#include<iostream>
using namespace std;

class student {
    public:
int roll_no;

private:
int age;

public:

void display() {
    cout<<age<<" "<<roll_no<<endl;
}

int getage() {  // so display function prints the value of age but age is private and cannot be accessed outside the class
                // so we use getter func as it is public and can return the age and be acceseed outside the class
    return age;
}

int setage(int a) {
    age =a;
}
};

int main()
{

student s1;
s1.roll_no=11;
//s1.age=13;
s1.setage(20);
cout<<"s1 age"<<s1.getage()<<endl;
cout<<"s1 rollno";
s1.display();

student *s2= new student ;
(*s2).roll_no=12;
s2->setage(20);
cout<<"S2 age"<<s2->getage()<<endl;
cout<<"s2 roll_no";

(*s2).display();
//(*s2).age=14;

// s2->roll_no=12;
// s2->age=14;
cout<<s1.roll_no<<endl;
//cout<<s1.age<<endl;
return 0;
}
