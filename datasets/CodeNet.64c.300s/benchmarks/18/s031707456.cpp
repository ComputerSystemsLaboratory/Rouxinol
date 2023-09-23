#include<stdio.h>
int n;

int fn(int n)
{
    if(n==0)return 1;
    if(n<0)return 0;
    return fn(n-1)+fn(n-2)+fn(n-3);
}

int main()
{
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        printf("%d\n",(((fn(n)+10-1)/10)+365-1)/365);
    }
    return 0;
}