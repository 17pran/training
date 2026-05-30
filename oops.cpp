#include <bits/stdc++.h>
class fruits
{
public:
    int apple;

    fruits(int value) : apple(value)
    {
    }

    ~fruits()
    {
    }
};

int main()
{
    fruits d{5};
    std::cout << d.apple;
    return 0;
}