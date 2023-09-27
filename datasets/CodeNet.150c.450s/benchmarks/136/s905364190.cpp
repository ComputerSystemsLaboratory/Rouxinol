#include<cstdio>
long long gcd(long long a,long long b)
{
    
    return b==0?a:gcd(b,a%b);
}
int main()
{
    long long a,b;
    while (scanf("%lld%lld",&a,&b)==2)
    {
    	long long sum=gcd(a,b);
    	long long num=a/sum*b;
    	printf("%lld %lld\n",sum,num);
	}
    return 0;
}