#include<iostream>
using namespace std;
void mergerArray(int input[], int low ,int high) {
int mid = (low +high)/2;
int i= low;
int j=mid +1;
int p=(high-low)+1;
int B[p];
int k=0;
while(i<=mid && j<=high) {
    if(input[i]<input[j]) {
        B[k]=input[i];
        k++;
        i++;
    }
    else {
        B[k]=input[j];
        j++;
        k++;
    }
}
while(i<=mid) {
    B[k]=input[i];
    i++;
    k++;
}
while(j<=high) {
    B[k]=input[j];
    k++;
    j++;
}
for(int k=low;k<=high;k++) {
    input[k]=B[k-low];
}
}
void mergeSorthelper(int input[] , int low , int high ,int n) {
    if(low>=high) {
        return ;
    }
    int mean= (low +high ) /2;
    mergeSorthelper(input,low , mean,n);
    mergeSorthelper(input, mean+1, high, n);
    mergerArray(input,low, high);
}
void mergeSort(int input[], int n) {
    mergeSorthelper(input,0,n-1,n);
}
int main()
{
    int n;
    cin>>n;
    int *input= new int[n];
    for(int i=0; i<n;i++) {
        cin>>input[i];
    }
    mergeSort(input, n);
    for(int j=0;j<n;j++) {
        cout<<"\n"; 
        cout<<input[j]<<" " ;
    }
    delete input;
return 0;
}