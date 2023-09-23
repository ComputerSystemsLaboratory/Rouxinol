#include<cstdio>

int main() {
    int a, b, area, len;
    scanf("%d %d", &a, &b);
    area = a * b;
    len = 2 * (a + b);
    printf("%d %d\n", area, len);
}