#include <iostream>
using namespace std;

int main()
{
    int num = 1234;
    int rev = 0;
    while (num > 0)
    {
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;

        cout << "Reverse = " << rev;

        return 0;
    }