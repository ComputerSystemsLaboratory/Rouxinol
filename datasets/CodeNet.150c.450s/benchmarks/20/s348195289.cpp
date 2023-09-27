#include <stdio.h>
int main(void)
{
    int h, s, m;
    scanf("%d", &s);
    printf("%d:%d:%d\n", s / 3600, s % 3600 / 60, s % 3600 % 60);
    return 0;
}
