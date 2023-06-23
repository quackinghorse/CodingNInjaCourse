#include<iostream>
using namespace std;

void incemnt1(int **p)
{
p=p+1;
}
void incemnt2(int **p)
{
*p=*p+1;
}
void incemnt3(int **p)
{
**p=**p+1;
}
int main()
{

    int i=10;
    int *p=&i;
    int**p2=&p;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    // incemnt1(*p);
    cout<<p<<endl;

return 0;
}