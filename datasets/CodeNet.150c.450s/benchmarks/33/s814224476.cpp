#include <cstdio>
#include <algorithm>

using namespace std;

int without_tax(int rate, int value) {
    int q = ((value + 1) * 100) / (100 + rate);
    int r = ((value + 1) * 100) % (100 + rate);
    return q - (r ? 0 : 1);
}

int add_tax(int rate, int value) {
    return (value * (100 + rate)) / 100;
}

int main(void) {
    for (;;) {
        int x, y, s;
        scanf("%d%d%d", &x, &y, &s);

        if (!x && !y && !s) { break; }

        int m = 0;
        for (int i = 1; i < s; i++) {
            int j = s - i;

            int a = without_tax(x, i);
            int b = without_tax(x, j);

            if (add_tax(x, a) + add_tax(x, b) != s) { continue; }

#if 0
            printf("debug a b: %d %d\n", a, b);
            printf("debug i j: %d %d\n", add_tax(x, a), add_tax(x, b));
            printf("debug s  : %d\n", add_tax(x, a) + add_tax(x, b));
            printf("debug s2 : %d\n", add_tax(y, a) + add_tax(y, b));
#endif

            m = max(m, add_tax(y, a) + add_tax(y, b));
        }

        printf("%d\n", m);
    }

    return 0;
}