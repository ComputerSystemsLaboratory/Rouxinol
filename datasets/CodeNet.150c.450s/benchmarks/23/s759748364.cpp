#include <cstdio>
#define NMAX 45

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        printf("1\n");
    } else {
        int fib[NMAX];
        fib[0] = fib[1] = 1;
        for (int i = 2; i < NMAX; i++) {
            fib[i] = fib[i-1] + fib[i-2];
            if (i == n) {
                printf("%d\n", fib[i]);
                break;
            }
        }
    }
    return 0;
}
