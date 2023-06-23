#include<iostream>
using namespace std;
int length(char input[]) {
int len=0;
    for(int i=0; i!='\0';i++)
    {
        len++;
    }
return len;
}

bool helper(char input[], int start , int end ) {
    if(input[0]=='\0' || input[1]=='\0') {
        return true;
    }
  
    if(input[start]==input[end]) {
        helper(input, start+1, end -1);
    }
    
    else {
        return false;
    }
}
bool checkPalindrome(char input[]) {
    int len=length(input);
    return helper(input,0,len-1);
}

int main()
{
    char input[50];
    cin>>input;
    if(checkPalindrome(input))
    {
        cout<<"true"<<endl;
    }
    else {
        cout<<"false "<<endl;
    }
return 0;
}