#include <stdio.h>
int gcd(long long int x,long long int y)
{
    long long int tem;
    while(y!=0)
    {
        tem=y;
        y=x%y;
        x=tem;
    }
    return x;
}
int main()
{
    long long int a,b,x,y,l,g;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        g=gcd(a,b);
        l=(a*b)/g;
        printf("%lld %lld\n",g,l);
    }
    return 0;
}