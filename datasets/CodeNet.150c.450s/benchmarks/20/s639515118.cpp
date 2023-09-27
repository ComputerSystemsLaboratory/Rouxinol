#include <stdio.h>
int main(void)
{
    int S=0;
    scanf("%d",&S);
    int h=0,m=0,s=0;
    h = S/3600;
    m = S/60 -h*60;
    s = S%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}