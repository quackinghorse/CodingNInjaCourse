#include<iostream>
using namespace std;

void selection_sort(int input[], int size) {
    int i;
    int min_index;
    int j;
    int temp;
for(i=0; i<size-1; i++) {
 min_index=i;
 j=i+1;
    for(j;j<size;j++) {
        if(input[j]<input[min_index]) 
        {
    min_index=j;
        }
    temp=input[i];
    input[i]=input[min_index];
    input[min_index]=temp;
    }
}
}
int main()
{
    int size;
    cin>>size;
    int *input= new int[size];
    for(int i=0; i<size ; i++) {
        cin>>input[i];
    }
    selection_sort(input, size);
     for(int i=0; i<size ; i++) {
        cout<<input[i];
    }
return 0;
}