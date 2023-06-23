#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:
    int roll_no;

    //default constructor
    student() {
        cout<<"Default constructor is called"<<endl;
    }

 student(int a) {    
        cout<<"constructor2 is called"<<endl;
        roll_no=a;
    }
 student(int p , int q) {
        cout<<"constructor3 is called"<<endl;
        roll_no=p;
        age=q;
    }
};
int main()
{

student s1; // default constructor gets called 
student s2(101); //constructor 1 gets called in here 
student s3(1, 21); // constructor 3 gets called in here 
s2=s1; // copy assignment opperator ges called
student s4= s3; // here on the backend student s4(s3) happens so constructor1 gets called 
    return 0;
}