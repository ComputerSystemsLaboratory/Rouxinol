#include <bits/stdc++.h>
using namespace std;
long long a[205],bas[65];
char s[205];
bool add(long long x)
{
	for (int i=60;i>=0;i--)
	{
		if (x&(1LL<<i))
		x^=bas[i];
	}
	if (!x)
	return 1;
	for (int i=60;i>=0;i--)
	{
		if (x&(1LL<<i))
		{
			bas[i]=x;
			return 0;
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		scanf("%lld",&a[i]);
		scanf(" %s",s);
		bool z=1;
		memset(bas,0,sizeof(bas));
		for (int i=n-1;i>=0;i--)
		{
			if (s[i]=='1')
			z&=add(a[i]);
			else
			add(a[i]);
		}
		printf("%d\n",!z);
	}
}