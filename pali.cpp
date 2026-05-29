#include <iostream>
using namespace std;

int main()
{
    int num = 1221;
    int temp = num;
    int rev = 0;
    while (num > 0)
    {
        int d = num % 10;   // get last digit
        rev = rev * 10 + d; // reverse number
        num = num / 10;     // remove last digit
    }
    if (temp == rev)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}