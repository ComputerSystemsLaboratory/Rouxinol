#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
long long gcd(long long a,long long b)
{
    if(b) return gcd(b,a%b);
    return a;
}
int main()
{
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        long long ans=gcd(a,b);
        long long ans1=a*b/ans;
        printf("%lld %lld\n",ans,ans1);
    }
    return 0;
}