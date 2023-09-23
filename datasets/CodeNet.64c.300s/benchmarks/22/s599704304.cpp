#include <stdio.h>

void right_triangle(int a, int b, int c);

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        right_triangle(a, b, c);
    }
    return 0;
}

void right_triangle(int a, int b, int c)
{
    int x, y, z;
    if (a <= b) {
        if (b <= c) {
            x = a;
            y = b;
            z = c;
        } else {
            x = a;
            y = c;
            z = b;
        }
    } else {
        if (a <= c) {
            x = a;
            y = b;
            z = c;
        } else {
            x = b;
            y = c;
            z = a;
        }
    }
    //ここまででzに最大値を持ってきた
    if (x * x + y * y == z * z) {
    printf("YES\n");
    } else {
    printf("NO\n");
    }
}