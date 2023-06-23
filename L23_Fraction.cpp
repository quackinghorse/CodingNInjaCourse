#include <iostream>
using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void dislpay()
    {
        cout << this->numerator << endl;
        cout << this->denominator << endl;
    }

    void simplify() {

        int gcd=1;
        int j= min(this->numerator, this->denominator) ;
        for(int i=0; i<=j;i++) {
            if(this ->numerator %i==0 && this->denominator %i== 0) {
                gcd=i;
            }
            this->numerator=this->numerator/gcd;
            this->denominator=this->denominator/gcd;
        }
    }

    void add(fraction const & f2) {  // note we are passing f2 as argument of f1 and we will update the addition value in f1 and therefore this keyword refers to the address of blocl f1

        int lcm= this->denominator *f2.denominator;
        int x= this->numerator *(lcm/this->denominator);
        int y= f2.numerator *(lcm/ f2.denominator);
        this->numerator = x +y;
        this->denominator=lcm;
    simplify();
    }

    void multiply(fraction const &f2) {
int numerator = this->numerator *f2.numerator;
int denominator= this ->denominator *f2.denominator;
simplify();
    }
};
int main() {
fraction f1(10,2);
fraction f2(15,4);

f1.add(f2); // here we have used f1 and updated the ans in f1 as it is .

f1.dislpay();
f2.dislpay();
   

    f1.multiply(f2);
    f1.dislpay();
    f2.dislpay();
    return 0;
}
// now in this  methord what happens is that when we create  void add(fraction f2)a seprate block of f2 is created to avoid this
// we can pass the value of f2 as refrence in void add(fraction &f2)
// further more we need to pass  void add(fraction const & f2) so that the value of f2 in main block canno't be changed 
//