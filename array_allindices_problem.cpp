#include<iostream>
using namespace std;

 int allIndexes(int *input, int size , int x , int *output) {
//     if(n==0) {
//         return 0;
//     }
//     int ans= allIndices(input+1,n-1,x,arr);
//     for(int j=0; j<n;j++) {
//         j=j+1;
//     }
//     if(input[0]==x) {   
//         for(int k=0;k<n;k++) {
//     arr[k+1]=arr[k];
//         }
//         arr[0]=0;
//         return sizeof(arr);
//     }
//     else {
//         return sizeof(arr);
//     }
// }
if(size==0){
  return 0;
}
int ans= allIndexes(input,size-1,x,output);
if (input[size - 1] == x) {
  output[ans] = size - 1;
  return ans + 1;
} else {
  return ans ;
}
}

int main()
{
int size;
cin>>size;
int *input = new int[size];
for(int i=0;i<size;i++) {
    cin>>input[i];
}

int x;
cin>>x;
int *output = new int[size];
    
    int smalloutput= allIndexes(input, size, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
return 0;
}