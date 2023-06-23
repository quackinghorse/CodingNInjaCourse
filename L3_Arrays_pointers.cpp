#include<iostream>
using namespace std;
int main()
{
int a[10];
cout<<a<<endl;    //both address of a and a[0] are effectively same 
cout<<&a<<endl;

a[0]=5;
cout<<*(a)<<endl; // this gives value at a[0] implyng a and a[0 point to the same addtress 
a[1]=14;
cout<<*(a+1)<<endl; // this gives the address at a[1] both a[1] and *(a+1) or i[a] are  same things
//diff btwn an array and a pointer
//1)SIZEOF
int *p=&a[0];
cout<<sizeof(a)<<endl;  //both aaray and pointer have different sizes 
cout<<sizeof(p)<<endl;
//2)array doesnt have separate address
cout<<&a<<endl; //same address as that of [0]
cout<<&p<<endl; // separate 8 bytes are allocated 
//3) array can't be reasssigned
p=a+1;
cout<<*p<<endl;
//a=a+1; gives error
cout<<a<<endl;
return 0;
}