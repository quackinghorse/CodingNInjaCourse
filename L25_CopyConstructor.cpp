#include<iostream>
#include<string.h>
using namespace std;

class student {
    private:
int age;



public:
char *name; 
student(int age , char *name) {

  this->age= age;
  //deep copy     // in deep copy we make a new array and hence the orignal array remains unaffected by the changes in tremp array
  char * str= new char[strlen(name) +1];
  strcpy(str , name);
  this->name= str;

}

//copy constructor 
student(student const &s) { // we pass it by refrence in here bcz we don't want a separate block moreover in student(student s) a copy constructor is called but since
// we have made our own copy constructor therefore default constructor doesn't get called.
    this->age=s.age;
      char * str= new char[strlen(s.name) +1];
  strcpy(str , s.name);
  this->name= str;

}

void display() {
      cout<<age<<" "<<name<<endl;
}
};
int main()
{
char name[]="abcd";
   student s1(20, name);
   s1.display();
//    name[3]='e';
//    student s2(10, name);
//     s2.display();
//     s1.display();
student s2(s1);
s2.display();
s2.name[0]='x';
s2.display(); 
s1.display(); // note the copy constructor shallow copies the name here therefore change in one changes the other to tackle this we would make out own copy constructor


return 0;
}