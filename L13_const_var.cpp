#include<iostream>
using namespace std;
int main()
{
    const int i=12; // value of i canno't be changed now 
//   int  i=11; // this gives the error 
int j=12;
const int &k=j;
//k++; this gives error as k is made constant 
j++;
cout<<k<<endl;
return 0;
}