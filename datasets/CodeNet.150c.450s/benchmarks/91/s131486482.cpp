/*
http://blog.csdn.net/liuke19950717
*/
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn= 999999+5;
ll prime[maxn];
int main()
{
	ll cnt=0;
	for(ll i=2;i<maxn;++i)
	{
		if(!prime[i])
		{
			prime[i]=++cnt;
			for(ll j=i*i;j<maxn;j+=i)
			{
				prime[j]=1;
			}
		}
		else
		{
			prime[i]=prime[i-1];
		}
	}
	ll n;
	while(~scanf("%lld",&n))
	{
		printf("%lld\n",prime[n]);
	}
	return 0;
}
