#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++) {
        cin>>arr[i];
    }
    int l;
    int p;
    for(l=0;l<n;l++) {
     p= arr[l];
    }
    int C[20][20];
    int k;
    for(int i=0;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
if(i==j) {
    C[i][j]=0;
    for(k=i;k<j;k++) {
        C[i][j]=min{C[i][k] + C[k+1][j] +arr[i-1]*arr[j]*arr[k]};
    }
}

        }
    }
}