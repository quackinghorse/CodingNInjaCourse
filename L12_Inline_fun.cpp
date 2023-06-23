// #include<iostream>
// using namespace std;
// int inline max(int a , int b)
// {
//     return (a>b) ? a :b;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     //int max=-1;
// //     if(a>max)
// //     {
// //     max =a; rather than using this we use tertiroy operator
// //     }
// //    if(b>max)
// //    {
// //     max=b;
// //    } 
//   // cout<<b<<endl;
//  // int c= (a>b)?a:b; //tertiory opperator
//  // cout<<c;
//  int c=max(a,b);
//  cout<<c;
// return 0;

// }

//default function
#include<iostream>
using namespace std;
int sum(int *p, int n, int si=0){
    int ans=0;
for(int k=si;k<n;k++)
{
ans+=p[k];
}
return ans;
}
int main()
{
     int n;
cout<<"enter the no. of elemnts in thhe array"<<endl;
cin>>n;
   int p[n];
    for(int i=0;i<n;i++){
cin>>p[i];
    }
    for(int j=0;j<n;j++){
        cout<<p[j];
    }
    sum(p,n);
    
    
return 0;
}