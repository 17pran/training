#include <iostream>
using namespace std;
int main()
{
    for (int i{1}; i < 5; i++)
    {
        for (int spaces = 0; spaces <= 5 - i; spaces++)
        {
            cout << " ";
        }
        for (int j{1}; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 99;
}