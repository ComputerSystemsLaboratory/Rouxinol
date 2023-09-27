#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    while(1)
    {
        b++;
        scanf("%d",&a);
        if(a==0) break;
        printf("Case %d: %d\n",b,a);
        a = 0;
    }
    return 0;
}