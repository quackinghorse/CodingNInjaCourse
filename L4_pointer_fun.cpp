#include<iostream>
using namespace std;

void printval(int *p)
{
    cout<<*p<<endl;
}

void incrementval(int *p)
{
    p=p+1;
}
void incremnt(int *p)
{
    (*p)++;
}
int main()
{
    int i=10;
    int *p=&i;

printval(p);
cout<<"before incremnting\t"<<p<<endl;
incrementval(p);
cout<<"after incremnting\t"<<p<<endl; // note here even after incrementing the orignal value of p still remanins same as when incremenval is called the p makes a copy and in that copy the value p is changed but orignal p remains same
cout<<*p<<endl;

incremnt(p);
cout<<*p<<endl; // this makes change in the orignal p as both the copied and the main address is same
return 0;
}