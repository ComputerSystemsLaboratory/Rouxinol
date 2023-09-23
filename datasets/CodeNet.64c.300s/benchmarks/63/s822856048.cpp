#include <cstdio>

int main() {
    long long int a, b;
    while (~scanf("%lld %lld", &a, &b)) {
        long long int x = a, y = b;
        while (true) {
            x = x % y;
            if (!x) {
                printf("%lld %lld\n", y, a * b / y);
                break;
            }
            y = y % x;
            if (!y) {
                printf("%lld %lld\n", x, a * b / x);
                break;
            }
        }
    }
}