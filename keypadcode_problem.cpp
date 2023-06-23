#include<iostream>
using namespace std;
#include <string>
using namespace std;

string code[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 

int keypad(int num, string output[]){
    if(num % 10 == 0 || num % 10 == 1) {
        output[0] = "";
        return 1;
    }

   string temp[10000];
   int smalloutput=num /10 ;
   int smalloutputSize= keypad(smalloutput, temp);
    int ans= num %10;

    int totalSize = smalloutputSize * code[ans].length();
    int k = 0;
    for(int i =0; i<smalloutputSize ; i++) {
        for(int j = 0; j < code[ans].length(); j++) {
            output[k++] = temp[i] + code[ans][j];
        }
    }

    return totalSize;
}

int main()
{
    int num;
    cin>>num;
    string output[10000];
    int count =keypad(num, output);
    for(int i=0;i<count;i++) {
        cout<<output[i]<<endl;
    }
return 0;
}
