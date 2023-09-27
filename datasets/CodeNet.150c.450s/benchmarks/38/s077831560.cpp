#include <stdio.h>

void triangle(int number)
{
    for(int i = 0; i < number; ++i) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if ((a > b) && (a > c)) {
            if (a * a == b * b + c * c) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if ((b > a) && (b > c)) {
            if (b * b == a * a + c * c) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else if ((c > a) && (c > b)) {
            if (c * c == a * a + b * b) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else //a == b == c
        {
            printf("NO\n");
        }
    }
}

int main(void)
{
    int number;
    scanf("%d", &number);
    triangle(number);
    return 0;
}