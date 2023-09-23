#include <stdio.h>

void judge_right_triangle(int a, int b, int c);

int main(void)
{
    int number;
    scanf("%d", &number);
    for (int i = 0; i < number; ++i) {
        int a;
        int b;
        int c;
        scanf("%d %d %d", &a, &b, &c);
        judge_right_triangle(a, b, c);
    }
    return 0;
}
void judge_right_triangle(int a, int b, int c)
{
    if (a * a + b * b == c * c) {
        printf("YES\n");
        return;
    }
    if (b * b + c * c == a * a) {
        printf("YES\n");
        return;
    }
    if (c * c + a * a == b * b) {
        printf("YES\n");
        return;
    }
    printf("NO\n");
    return;
}