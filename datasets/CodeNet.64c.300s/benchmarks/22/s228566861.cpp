#include <stdio.h>

int main(void)
{
    int N;
    int a, b, c;
    int i;
    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        if (a * a + b * b == c * c) {
            printf("YES\n");
        } else if (b * b + c * c == a * a) {
            printf("YES\n");
        } else if (c * c + a * a == b * b) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}