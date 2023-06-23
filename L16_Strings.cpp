#include<iostream>
using namespace std;
#include<string.h>
int main()
{

  //  string * sp = new string ; // dyanmicalluy creating string

    // cout<<sp<<endl;
    // *sp="ll";
    // cout<<*sp<<endl;
     string s1;
     s1="def";
     cout<<s1<<endl;
    string s ="abc";
    cout<<s<<endl;
  //  string p;
  //  getline(cin, p); // to not break the string if space is given
   // cin>>p;
   // cout<<p;
    // concatentation of string 
    string s2 =s +s1;
    cout<<s2<<endl;
     // size of a sting 
     cout<<s2.size()<<endl;
 
// substring
cout<<s2.substr(3)<<endl;
cout<<s2.substr(3,3)<<endl;
return 0;
}