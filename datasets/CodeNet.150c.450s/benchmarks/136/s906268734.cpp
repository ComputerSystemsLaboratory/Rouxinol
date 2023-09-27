#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll a,b;
ll gcd(ll m,ll n)
{
    if(m==0)return n;
    if(n==0)return m;
    return gcd(n,m%n);
}
int main()
{
    while(~scanf("%lld%lld",&a,&b))
    {
        ll ans1=gcd(a,b);
        ll ans2=a*b/ans1;
        printf("%lld %lld\n",ans1,ans2);
    }
    return 0;
}