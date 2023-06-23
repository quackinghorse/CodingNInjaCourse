#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1) // to avoid segmentation fault
    {
        return 1;
    }
    int smalloutput1=fibo(n-1); // this is extended pmi in which we assume f(i) then it's true for all i<k
    int smalloutput2=fibo(n-2);
    return (smalloutput1 + smalloutput2);
    
}
int main()
{
    int n;
    cout<<"Enter the no. of term "<<endl;
    cin>>n;
   cout<< fibo(n)<<endl;

return 0;
}