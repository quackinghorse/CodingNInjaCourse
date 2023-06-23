#include<iostream>
using namespace std;
void linear_search(int input[], int size, int element) {
    if(size==0) {
        return;
    }
    if(input[0]==element) {
        cout<<"Element is present"<<endl;
    }
    linear_search(input+1, size -1, element);
}
int main()
{
         int size;
    cin>>size;
    int * input= new int[size];
    for(int i=0; i<size ; i++) {
        cin>>input[i];
    }
    int element;
    cin>>element;
    linear_search(input, size, element);
return 0;
}