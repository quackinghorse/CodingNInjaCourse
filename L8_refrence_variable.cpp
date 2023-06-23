#include<iostream>
using namespace std;
// void inc(int n){
//     n++;
// }
void inc (int &n){
    n++;  // a change of value(11) is noticed in main i as both n and i share same address
}

int main()
{
    int i=10;
    int &j=i;
    inc(i);
    cout<<i<<endl; // the value of i doesnt changes as no change is made in the i of main which has separate add as that of the fun in incremnt 
    i++;
    cout<<&i<<" \n"<<j<<endl;
    
return 0;
}