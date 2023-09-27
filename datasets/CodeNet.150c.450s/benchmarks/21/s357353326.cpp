#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        printf("%d\n",x*x*x);
    }
    return 0;
}