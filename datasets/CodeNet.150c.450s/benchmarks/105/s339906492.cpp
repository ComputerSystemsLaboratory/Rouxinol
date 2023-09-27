//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<string.h>
#include<cstring>
#include<set>
#include<queue>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<map>
#include<stack>
#include<list>
#include<assert.h>
#define INF 0x3f3f3f3f
#define LLINF 1e16
#define pii pair<int, int>
#define pll pair<LL, LL>
#define pil pair<int, LL>
#define pli pair<LL, int>
#define mp make_pair
#define pb push_back
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
const int MOD = 1e9+7;
const int HMOD = 999959;
const int VMOD = 5000000;
const int MAXN = 1e4+10;
const int INV = 500000004;
const double eps = 1e-8;
int Next[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1};

LL xr[MAXN], a[MAXN];
int n;
char s[210];

int main()
{
#ifdef LOCAL_JUDGE
	freopen("test.in", "r", stdin);
	//freopen("test.out", "w", stdout);
#endif
IOS;
	int t;
	scanf("%d", &t);
	while (t--)
	{
		memset(xr, 0, sizeof(xr));
		scanf("%d", &n);
		for (int i = 1;i <= n; ++i)
			scanf("%lld", &a[i]);
		scanf("%s", s+1);
		bool ok = 1;
		for (int i = n; i >= 1; --i)
		{
			if (s[i] == '0')
			{
				for (int j = 60;j >= 0; --j) if ((a[i] >> j) & 1)
				{
					if (xr[j] == 0)
					{
						xr[j] = a[i];
						break;
					}
					a[i] ^= xr[j];
				}
			}
			else
			{
				for (int j = 60;j >= 0; --j) if ((a[i] >> j) & 1)
					a[i] ^= xr[j];
				if (a[i]) ok = 0;
			}
		}
		printf("%d\n", ok ? 0 : 1);
	}


	return 0;
}