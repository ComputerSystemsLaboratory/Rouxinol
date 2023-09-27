#include<stdio.h>
int main(void)
{
    long long int i,n,x=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        x=x*i;
    }
    printf("%lld\n",x);
    return 0;
}