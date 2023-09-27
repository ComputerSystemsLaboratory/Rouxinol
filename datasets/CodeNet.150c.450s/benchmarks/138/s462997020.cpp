#include <stdio.h>

int main()
{
    int a, b, r;
    scanf("%d%d", &a, &b);
    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    while ((r = a % b) != 0) {
        a = b;
        b = r;
    }
    printf("%d\n", b);
    return 0;
}