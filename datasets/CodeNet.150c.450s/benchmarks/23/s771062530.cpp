#include <cstdio>

int main(void) {
    int i, n;
    scanf("%d", &n);
    int fib[n+1];
    fib[0] = fib[1] = 1;
    for (i = 2; i <= n; i++) fib[i] = fib[i-2] + fib[i-1];
    printf("%d\n", fib[n]);

    return 0;
}