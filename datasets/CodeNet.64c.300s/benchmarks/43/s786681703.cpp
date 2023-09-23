#include <stdio.h>

int main() {
    int a_sum, a1, a2, a3, a4;
    int b_sum, b1, b2, b3, b4;

    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    scanf("%d %d %d %d", &b1, &b2, &b3, &b4);

    a_sum = a1 + a2 + a3 + a4;
    b_sum = b1 + b2 + b3 + b4;

    printf("%d\n", (a_sum>b_sum)?a_sum:b_sum);
}