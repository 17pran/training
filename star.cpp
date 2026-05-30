#include <iostream>
using namespace std;
void printfull(int n)
{
    for (int i{1}; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;
}
void printhalf(int n) // 5
{
    for (int i{1}; i <= n; i++) // i
    {
        if (i == 1 || i == n)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    for (int i{1}; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            printfull(n);
        }
        else
            printhalf(n);
    }
    return 0;
}
// time complexity is n
