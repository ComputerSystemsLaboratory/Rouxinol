#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 205;

int T,n;

ll base[64];
ll a[MAXN];

char s[MAXN];

void insert(ll v)
{
	for (int i = 62;i >= 0;i--)
		if (v >> i & 1)
		{
			if (!base[i])
			{
				base[i] = v;
				return;
			}
			v ^= base[i];
		}
}

bool ok(ll v)
{
	for (int i = 62;i >= 0;i--)
		if (v >> i & 1)
		{
			if (!base[i])
				return 0;
			v ^= base[i];
		}
	return 1;
}

int main()
{
	scanf("%d",&T);
	while (T--)
	{
		scanf("%d",&n);
		for (int i = 1;i <= n;i++)
			scanf("%lld",&a[i]);
		scanf("%s",s + 1);
		memset(base,0,sizeof(base));
		int flag = 0;
		for (int i = n;i >= 1;i--)
			if (s[i] == '0')
				insert(a[i]);
			else if (!ok(a[i]))
			{
				flag = 1;
				break;
			}
		printf("%d\n",flag);
	}
	return 0;
}
