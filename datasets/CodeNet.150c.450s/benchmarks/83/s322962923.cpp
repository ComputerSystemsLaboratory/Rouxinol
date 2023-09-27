#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long LL;
ostream &debug = cout;

/* AOJ DPL_1_B */

const int N = 105;
const int M = 10005;

int n, m, wei[N], val[N], dp[M];

signed main(void) {
	/* input */
	{
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; i++)
			scanf("%d%d", val + i, wei + i);
	}
	/* dynamic programming */
	{
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= n; i++)
			for (int j = m; j >= wei[i]; j--)
				dp[j] = max(dp[j], dp[j - wei[i]] + val[i]);
	}
	/* output */
	{
		int ans = 0;
		for (int i = 0; i <= m; i++)
			ans = max(ans, dp[i]);
		printf("%d\n", ans);
	}
//	system("pause");
}