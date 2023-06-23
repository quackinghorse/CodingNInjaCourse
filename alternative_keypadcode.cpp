#include<iostream>
using namespace std;

void keypad(string input, string output) { //i have used string in place of string array as we have first dealth woth the first element here and simulatenously printed the putput in a sting ratheer thsn storing it in an array
if(input.length()==0) {
    cout<<output<<endl;
    return ;
}
keypad(input.substr(1), output);
keypad(input.substr(1), output + input[0]);
}

int main()
{ 
    string input;
    cin>>input;
    string output="";
    keypad(input, output);
return 0;
}