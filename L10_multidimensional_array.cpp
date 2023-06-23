#include<iostream>
using namespace std;
int main()
{
    int n; 
    int m;   
cout<<"enter the no. of rowns \t"<<endl;
    cin>> n;
    cout<<"enter the no. of coumns \t"<<endl;
    cin>>m;
    int **p=new int*[n];
    for(int i=0;i<n;i++)
    {
p[i]=new int [m];
    
    for(int j=0;j<n;j++)
    {
        cin>>p[i][j];
       
    }
    delete [] p[i]; // this is done to free up space from the array;
    delete []p;
    }
    cout<<"the elements in array are \n"<<endl;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
cout<<p[k][l];
        }
    }
return 0;
}