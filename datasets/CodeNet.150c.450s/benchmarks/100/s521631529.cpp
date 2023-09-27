#include<stdio.h>
int main()
{
    long long i,n,j=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        j=j*i;
    }
    printf("%lld",j);
    printf("\n");
    return 0;
}