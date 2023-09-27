#include <cstdio>

int gcd(int x, int y)
{
    if (x > y)
    {
        int t = y;
        y = x;
        x = t;
    }
    if (x == 0 || x == y) return y;
    if (x == 1) return 1;
    return gcd(y % x, x);
}

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d\n", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}