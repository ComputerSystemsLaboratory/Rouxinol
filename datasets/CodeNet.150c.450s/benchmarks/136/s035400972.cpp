#include <cstdio>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    while (1) {
        int a, b;
        int ret = scanf("%d%d", &a, &b);
        if (ret < 0) break;
        int g = gcd(a, b);
        printf("%d %d\n", g, a / g * b);
    }
    return 0;
}