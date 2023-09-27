#include <stdio.h>
int main(void)
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a == b || a > b)
        puts("No");
    else if (b == c || b > c)
        puts("No");
    else
    {
        puts("Yes");
    };

    return 0;
}
