#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    float img;

    Complex(int r, float i) : real(r), img(i) {}

    Complex operator+(const Complex &rhs)
    {
        return Complex(real + rhs.real, img + rhs.img);
    }
};

int main()
{
    Complex number1(5, 10);
    Complex number2(10, 20);

    Complex number3 = number1 + number2;

    cout << number3.real << " " << number3.img;

    return 0;
}