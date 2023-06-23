#include<iostream>
using namespace std;
int main()
{

    int i=12;
    int *p=&i;
    cout<<p<<endl; // address of i is printed
    p++;      // this make the pointer p points towards the next integer
    cout<<p<<endl; // the address of next integer is printed 
return 0;
}