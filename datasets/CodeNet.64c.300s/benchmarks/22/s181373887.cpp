#include <stdio.h>

void right_triangle(int a, int b, int c)
{
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main(void)
{
    int n, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        right_triangle(a, b, c);
    }    
    return 0;
}