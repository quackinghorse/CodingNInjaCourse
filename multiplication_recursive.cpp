#include<iostream>
using namespace std;
int multiplication(int a , int b) {
if(b==0) {
    return 0;
}
int ans=multiplication(a, b-1);
return ans +a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiplication(a,b)<<endl;
return 0;
}