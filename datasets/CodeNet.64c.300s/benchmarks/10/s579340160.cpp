#include <stdio.h>

int main()
{
    int a, b;

    while (scanf("%d%d", &a, &b) == 2 && !(a == 0 && b == 0)) {
        if (a <= b) {
            printf("%d %d\n", a, b);
        } else {
            printf("%d %d\n", b, a);
        }
    }
}