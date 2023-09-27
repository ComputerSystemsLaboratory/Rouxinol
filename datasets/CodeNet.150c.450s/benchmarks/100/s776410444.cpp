#include <iostream>

unsigned long long fact(unsigned long long n)
{
    if (n <= 1) return 1;
    else return n * fact(n - 1);
}

int main()
{
    unsigned long long n;
    std::cin >> n;
    std::cout << fact(n) << std::endl;
}