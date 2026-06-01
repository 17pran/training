#include <iostream>
using namespace std;

auto sum(auto a, auto b) // same datatype T
{
    return a + b; // return type also T
}
int main()
{
    cout << sum(7, 4.8);
    return 0;
}

/*
template <typename T1, typename T2>
auto sum(T1 a, T2 b)
{
    return a + b;
}*/