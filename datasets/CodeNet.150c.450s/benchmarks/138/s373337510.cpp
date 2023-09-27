#include <cstdio>
#include <iostream>

int gcd(int a, int b)
{
    if(a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    printf("%d\n", gcd(a, b));

    return 0;
}