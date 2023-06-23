#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSub(int arr[], int n) {
    int sum ;
    int res =arr[0];
for(int i=0; i<n ;i++) {
    sum=0;
    for(int j=i; j<n;j++) {
 sum = sum +arr[j];
    }
  
    
}
return max(sum, res);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++) {
        cin>>arr[i];
     }
    int maxSum= maxSub(arr , n);
    cout<<maxSum<<endl;
return 0;
}