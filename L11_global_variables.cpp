#include<iostream>
using namespace std;
int a;
void g()
{
    cout<<a<<endl;
    a++;
}
void f()
{
    a++;
    cout<<a<<endl;
    g();
}
int main()
{
    a=10 ;
    f();
cout<<a<<endl;
return 0;
}