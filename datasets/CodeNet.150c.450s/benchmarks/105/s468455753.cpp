#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
int T,n;
ll a[203],num[64];
int s[203];
bool ins(ll x)
{
	for(int i=62;i>=0;i--)
		if((x>>i)&1)
		{
			if(num[i]==0)
			{
				num[i]=x;
				return true;
			}
			x^=num[i];
		}
	return false;
}
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%lld",&a[i]);
		for(int i=1;i<=n;i++)
			scanf("%1d",&s[i]);
		memset(num,0,sizeof(num));
		int ans=0;
		for(int i=n;i;i--)
		{
			if(s[i]==0) ins(a[i]);
			else if(ins(a[i]))
			{
				ans=1;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}