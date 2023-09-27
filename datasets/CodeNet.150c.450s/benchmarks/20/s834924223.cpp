#include <stdio.h>

int main(void)
{
    int totalsecond, hour, min, sec;
    scanf("%d", &totalsecond);
    hour = totalsecond / 3600;
    min = totalsecond % 3600 / 60;
    sec = totalsecond % 3600 % 60;
    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}
