#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class fraction{
int numerator;
int denominator;
public:
void setNumerator(int n) {
numerator = n ;

}
void setDenominator(int d) {
denominator= d ;
}
int getNumertor() {
return numerator;
}
int getDenominator() {
    return denominator;
}
void print () {
    cout<<this->numerator<<endl;
    cout<<this->denominator<<endl;
}
void simplify(int numerator , int denominator);
};
void fraction :: simplify(int numerator , int denominator) {
    int gcd =1;
int a = min(this->numerator, this->denominator);
for(int i=1; i<=a ; i++) {
    if(numerator % i==0 && denominator % i==0) {
        gcd = i;
    }
     this->numerator = numerator/gcd;
     this->denominator= denominator/gcd;

}
}
int main()
{
    fraction f1;
    f1.setNumerator(10);
    f1.setDenominator(20);
    int num=f1.getNumertor();
   int den= f1.getDenominator();
f1.simplify(num , den);
f1.print();

return 0;
}