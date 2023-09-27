#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long mod_pow(long long a,long long b)
{
long long ans=1;
while(b>0)
{
if(b&1)ans=ans*a%mod;
a=a*a%mod;
b>>=1;
}
return ans;
}

int main()
{
long long m,n;scanf("%lld %lld",&m,&n);
printf("%lld\n",mod_pow(m,n));
}

