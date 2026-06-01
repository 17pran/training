#include <iostream>
using namespace std;
template <typename T, typename K>
auto sum(T a, T b)
{
    return a + b;
}

int main()
{
    int arr[5] = {1, 2, 3};
    // base addr+sizeof datatype*index
    cout << *(arr + 1); // arr has base addr 100, 1 is int with size 4 so 100+4=104 which is base addr of 2nd ele so it return 2
    return 0;
}
