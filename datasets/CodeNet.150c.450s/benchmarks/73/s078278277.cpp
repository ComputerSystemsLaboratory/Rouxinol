
#include<bits/stdc++.h>
typedef long long ll;
ll n,a[100002],c[100011];
ll getSum(ll x)
{
	ll i;
	ll sum=0;
	for(i=x+1;i>0;)
	{
		sum+=c[i];
		i-=(i & -i);
	}
return sum;
	}
void update(ll x,ll y)
{
	ll i;
a[x]+=y;
	for(i=x+1;i<=n;)
	{
		c[i]+=y;
		i+=(i & -i);
	}
	
}

int main()
{
	ll q,com,x,y;
	scanf("%lld%lld",&n,&q);
	for(ll i=0;i<n+1;i++) 
	{
		a[i]=0;
		c[i]=0;
	}
	for(ll i=0;i<q;i++)
	{
		scanf("%lld%lld%lld",&com,&x,&y);
		if(com==0)
		 update(x-1,y);
		 else
		 printf("%lld\n",getSum(y-1)-getSum(x-2)); 
	}

	
	return 0;
	
	}