#include <stdio.h>

void right_triangle(int a, int b, int c);

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int count = 0; count < n; ++count) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        right_triangle(x, y, z);
    }
    return 0;
}

void right_triangle(int a, int b, int c)
{
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}