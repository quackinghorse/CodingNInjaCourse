#include<iostream>
#include<string.h>
using namespace std;

class student {
    private:
int age;
char *name; 
public:
student(int age , char *name) {

  this->age= age;
  // shallow copy
  this->name=name;
  //deep copy     // in deep copy we make a new array and hence the orignal array remains unaffected by the changes in tremp array
  char * str= new char[strlen(name) +1];
  strcpy(str , name);
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
   name[3]='e';
   student s2(10, name);
    s2.display();
    s1.display();

return 0;
}