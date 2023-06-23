#include<iostream>
using namespace std;
int search_lastindex(int input[] ,int n , int x) {
if(n==0) {
    return -1;
}
if(input[n]==x) {
    return n;
}
int ans= search_lastindex((input)+n-1, n-1, x);
if(ans==-1) {
    return ans;
}
else {
    return (ans -1);
}
}

int main()
{
    int n;
    cin>>n;
    int *input = new int[n];
    for(int i=0; i<n; i++) {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<search_lastindex(input,n,x)<<endl;

return 0;
}