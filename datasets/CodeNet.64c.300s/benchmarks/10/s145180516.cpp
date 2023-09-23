#include <cstdio>

int main() {
    int i, x, y, t;
    for (i = 0;; ++i) {
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0) break;

        if (x > y) {t = x; x = y; y = t;}
        printf("%d %d\n", x, y);
    }
    return 0;
}