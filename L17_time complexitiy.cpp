#include<iostream>
using namespace std;


void mergerArray(int input[], int low , int high) {
    int mean = ( low + high )/2;
    int i =low ;
    int j =mean +1 ;
    int k= low;
    int B[1000];
    while(i<= mean && j<=high) {
          if(input[i]<input[j]) {
            B[k]=input[i];
            i++;
            k++;
        }
        else {
             B[k]=input[j];
            j++;
            k++;
        }
    }
    while(i<= mean) {
            B[k]=input[i];
            i++;
            k++;
    }
     while(j<=high) {
            B[k]=input[j];
            j++;
            k++;
}
for(int k=low; k<=high;k++) {
    input[k]=B[k];
    k++;
}
}
void mergeaSorthelper(int input[], int low , int high) {
    int mid = (low + high)/2;
    if(low>=high) {
        return;
    }
    mergeaSorthelper(input, low , mid -1);
    mergeaSorthelper(input, mid+1, high);
    mergerArray(input, low , high);
}
void mergesort(int input[], int size) {
    mergeaSorthelper(input,0,size-1);
}
int main()
{
    int size;
    cin>>size;
    int *input = new int [size];
    for(int i =0; i<size;i ++) {
        cin>>input[i];
    }
    mergesort(input,size);
    for(int i=0; i<size;i ++) {
        cout<<input[i]<<"\t";
    }
return 0;
}