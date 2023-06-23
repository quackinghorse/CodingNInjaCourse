#include <iostream>
using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction()
    {
    }
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() {
        return numerator;
    }
    int setNumerator(int n) {
        numerator=n;
    }
       int getDenominator() {
        return numerator;
    }
    int setDenom(int n) {
        numerator=n;
    }

    void dislpay()
    {
        cout << numerator << endl;
        cout << denominator << endl;
    }

void simplify() {
    int gcd=1;
    int m= min(this->numerator , this->denominator);
    for(int i=0; i<=m;i++) {
if(this->numerator%m ==0 && this->denominator%m==0) {
    gcd =i;
}
this->numerator= numerator/gcd;
this->denominator=denominator/gcd;
    }
}

    void add(fraction const & f2) {
int lcm = this->denominator * f2.denominator;
int a= (lcm / this ->denominator);
int x=this->numerator *a;
int b= (lcm / f2.denominator);
int y=f2.denominator *b;
this->numerator= x+y;
this->denominator=lcm;
simplify();
    }
     void multiply(fraction const &f2) {
int numerator = this->numerator *f2.numerator;
int denominator= this ->denominator *f2.denominator;
simplify();
    }

};
int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);
 f1.dislpay();
    f2.dislpay();
  
  cout<<"ADDING"<<endl;
  f1.add(f2);
  f1.dislpay();
  f2.dislpay();
  f1.multiply(f2);
  f1.dislpay();
  f2.dislpay();


    return 0;
}
