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
        cout << this->numerator << "/" <<this->denominator<<endl;
    }

    void simplify()
    {

        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for (int i = 0; i <= j; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
            {
                gcd = i;
            }
            this->numerator = this->numerator / gcd;
            this->denominator = this->denominator / gcd;
        }
    }

    void add(fraction const &f2)
    {

        int lcm = denominator * f2.denominator;
        int x = numerator * (lcm / denominator);
        int y = f2.numerator * (lcm / f2.denominator);
        numerator = x + y;
        denominator = lcm;
        simplify();
    }

    void multiply(fraction const &f2)
    {
        int numerator = numerator * f2.numerator;
        int denominator =denominator * f2.denominator;
        simplify();
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(15, 4);

    f1.add(f2);

    f1.dislpay();
    f2.dislpay();

    f1.multiply(f2);
    f1.dislpay();
    f2.dislpay();
    return 0;
}
