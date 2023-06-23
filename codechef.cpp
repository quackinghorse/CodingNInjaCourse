#include <iostream>
using namespace std;
#include<string.h>


int main() 
{

	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int N;
	    cin>>N;
	    string S[N];
	    cin>>S[N];
	    int i =0;
        int j=0;
	    while(i<j) {
        
	        int ans =0;
	        for(int i=0; i<N;i++) {
	            if(S[i]==S[i+1]) {
	                ans = ans +2;
	                i++;
	            }
    int so=N- ans;
    cout<<so<<endl;
	        }
	        
	    }
    }
}