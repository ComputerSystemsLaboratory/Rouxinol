#include <stdio.h>

int main(void)
{
    int time, h, m, s;
    scanf("%d", &time);
    h = time / (60 * 60);
    m = (time - (time / (60 * 60)) * 60 * 60) / 60;
    s = time % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}