#include<iostream>
using namespace std;
void sumele(int *a, int n) // note in function array is called as a pointer size is 8 bytes
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
ans+=a[i];
cout<<ans<<endl;
    }
}
int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10}; // here it's size is 40 bytes and it's an array
   // sumele(a,10);
sumele(a+3,7); // ARRAY CAN BE PASS AS FRAGMENTS/PARTS AS IT BEHAVES LIKE A POINTER

return 0;
}