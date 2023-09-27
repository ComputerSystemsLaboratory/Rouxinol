#include <stdio.h>
int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    while (a != 0 || b != 0) {
        if (b < a) {
            temp = b;
            b = a;
            a = temp;
        }
        printf("%d %d\n", a, b);
        scanf("%d %d", &a, &b);
    }
    return 0;
}