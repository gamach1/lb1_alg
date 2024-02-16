#include <iostream>

using namespace std;

int F(int n)
{
    if (n >= 2025)
    {
        return n;
    }
    else
    {
        return n + F(n + 2);
    }
}

int main()
{
    int result = F(2022) - F(2023);
    cout << result << endl;
}
