#include <iostream>
#include <cstdio>
#include <cstring>
#define MN 220

typedef long long ll;

ll d[64], a[MN];
char s[MN];

bool ins(ll x)
{
	for(int i = 62; i >= 0; i--)
	{
		if((x >> i) & 1)
		{
			if(!d[i]) {d[i] = x; return 1;}
			x ^= d[i];
		}
	}
	return 0;
}

int main()
{
	int T; scanf("%d", &T);
	while(T--)
	{
		memset(d, 0, sizeof(d));
		int n; scanf("%d", &n);
		for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
		scanf("%s", s + 1);
		bool ok = 0;
		for(int i = n; i >= 1; i--)
		{
			if(s[i] == '0') ins(a[i]);
			else if(ins(a[i])) {ok = 1; break;}
		}
		printf("%d\n", ok);
	}
}