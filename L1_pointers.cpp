#include<iostream>
using namespace std;

int main(){
//     int a = 50;
//  int *ptr = &a;
//  cout << (*ptr)++ << endl;
//  cout<<"after increment \n"<<(*ptr)<<endl;
//  cout << a << endl;
int i=12;
int *p=&i;
cout<<p<<endl; // created a variable p that points to the address of i
cout<<(*p)<<endl;

// int a=i;
// a++;
// cout<<"print this\n"<<a<<endl;
// cout<<i;
// float f =10.2; 
// float *pf=&f;
// cout<<pf<<endl;
// double g=11.44;
// double *pq=&g;
// cout<<pq<<endl;

    return 0;
}