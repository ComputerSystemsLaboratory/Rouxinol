#include <stdio.h>
int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d:%d:%d\n", a/3600,(a%3600)/60,(a%3600)%60);
    return 0;
}
