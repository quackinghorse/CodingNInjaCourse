#include<iostream>
using namespace std;
int main()
{
    int *p =new int; // memory allocated in heap and p pointer is stored in stack
    *p=10;
    cout<<*p<<endl;
    int n;
    cout<<"Enter the no. of elements in the array";
    cin>>n;
    int *pa= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>pa[i];
    }
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(max<pa[i])
        {
            max=pa[i];
        }
    }
    cout<<"max elemnt is ";
    cout<<max<<endl;
    

return 0;
}