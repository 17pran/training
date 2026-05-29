#include <iostream>
using namespace std;
int main()
{
    int num = 123456;
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10; // get last digit
        sum = sum + digit;    // add digit to sum
        num = num / 10;       // remove last digit
    }
    cout << "Sum of digits = " << sum;
    return 0;
}