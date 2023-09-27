#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    for (; n > 0; n--) {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        if (a * a + b * b == c * c || a * a + c*c == b*b || b*b + c*c == a*a) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}