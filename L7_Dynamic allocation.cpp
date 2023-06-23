#include<iostream>
using namespace std;
int main()
{
    int i=65;
    int *p =&i;
    char *pc=(char*)p; // extrinsic type casting as intinsic type castinig does't work here
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc +1)<<endl; // int representation is inverted 
    cout<<*(pc +2)<<endl;
    cout<<*(pc +3)<<endl;


return 0;
}