#include<iostream>
using namespace std;
void insertionSort(int input[] , int size) {
    int i;
    int temp;
   
for( i=1; i<size;i ++) {
     int key = input[i];
     int j= i-1;
while(j>=0 && input[j+1]<=input[j]) {
input[j+1]= input[j];
j--;
}
input[j+1]=key;
}
}
int main()
{
     int size;
    cin>>size;
    int * input= new int[size];
    for(int i=0; i<size ; i++) {
        cin>>input[i];
    }
    insertionSort(input, size);
    for(int i=0; i<size; i++) {
        cout<<input[i]<<"\t";
    }
return 0;
}