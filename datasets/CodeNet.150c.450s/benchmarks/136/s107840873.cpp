#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0){
        return a;
    }
    else {
        return (gcd(b, a % b));
    }
}

int lcm(int a, int b)
{
    return (a / gcd(a, b) * b);
}

int main(void)
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF){
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }

    return (0);
}