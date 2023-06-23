#include<iostream>
using namespace std;

class student {

// static function satrts here   
 private :
 static int totalStudents;
public :
int age;
int Rollno;
  // static int totalStudents; // static data member

student(int age , int Rollno) {
    this->age=age;
    this->Rollno=Rollno;
    totalStudents++; // as the constructor gets called the value of student increases by one
}

 static int gettotalStudents() {
return totalStudents;
}
void display() {
    cout<<age<<" "<<Rollno<<endl;

}

};
    int student :: totalStudents=0; // initialise static data member
int main()
{

student s1(10,12);
student s2(11,12);
student s3(13,12);

s1.display();
s2.display();
s3.display();
  // cout<<student::totalStudents<<endl;
// access static function member
cout<<student::gettotalStudents()<<endl;
return 0;
}