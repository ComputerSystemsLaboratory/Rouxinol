#include<cstdio>
#include<cmath>

long long gcd(long long a, long long b)
{
    return b?gcd(b,a%b):a;
}
long long m,n;
int main()
{
    while(~scanf("%lld%lld",&m,&n))
    {
        long long temp = gcd(m,n);
        printf("%lld %lld\n",temp,m/temp*n);
    }
    return 0;
}