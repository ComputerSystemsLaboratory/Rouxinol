#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

unsigned GCD(unsigned a, unsigned b)
{
    if (!b) return a;
    return GCD(b, a%b);
}

unsigned LCM(unsigned a, unsigned b)
{
    return a / GCD(b, a-b) * b;
}

int main(void)
{
    unsigned a, b;
    while (scanf("%u %u", &a, &b) != EOF) {
        if (a < b) swap(a, b);
        printf("%u %u\n", GCD(a, b), LCM(a, b));
    }

    return 0;
}