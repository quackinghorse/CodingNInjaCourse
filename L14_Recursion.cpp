#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){ // this is done to prevemt segmentation fault i.e. if not done it wouldn't stop until no memory is left
        return 1;
    }
    cout<<n<<endl;
int smalloutput=factorial(n-1);
return n*smalloutput;
}
int main()
{
    int n;
    cout<<"enter the no."<<endl;
    cin>>n;
    int output=factorial(n);
    cout<<output<<endl;
return 0;
}