#include<iostream>
using namespace std;
 int search(int *input, int n,int x)
 {
    if(n==0) { // base case
        return -1;
    }
    if(input[0]==x) {
return 0;
    }
    int ans = search(input +1, n-1,x); // passed whole array except 1 element
    if(n==0){
        return ans; // if 1 is added to -1 it would return 0 so we place a check condition to prevent that
    }
    else {
        return ans +1;  // to note passed array contains 1 less member than orignal array therefore it is to be increased by one to get orignal index
    }
 }

int main()
{
    int n;
    cin>>n;
    int *input=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<search(input, n,x)<<endl;

return 0;
}