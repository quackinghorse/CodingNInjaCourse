#include<iostream>
using namespace std;
bool is_sorted(int *arr, int n)
{
//base case
if(n==0|| n==1)
{
    return true;
}
if(arr[0]>arr[1])
{
    return false;
}
bool is_small_sorted=is_sorted(arr+1, n-1); // recursive call on each individual array
return is_small_sorted;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr);
   cout<< is_sorted(arr,n)<<endl;
return 0;
}