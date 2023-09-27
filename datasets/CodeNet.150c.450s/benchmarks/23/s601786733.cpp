#include <iostream>

using namespace std;

const int N = 45;
int memo[N];

int fib(int n)
{
    if (memo[n]) return memo[n];
    if (n < 2) return memo[n] = 1;
    return memo[n] = fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}

