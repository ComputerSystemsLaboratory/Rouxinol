#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int s = x * y;
    int l = 2 * (x + y);
    printf("%d %d\n", s, l);
    return 0;
}