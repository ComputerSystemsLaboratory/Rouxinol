#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

typedef long long LL;
ostream &debug = cout;

/* AOJ DPL_1_A */

const int N = 25;
const int M = 60005;
const int INF = 0x3f3f3f3f;

int n, m, a[N], dp[M];

signed main(void) {
	/* input */
	{
		scanf("%d%d", &m, &n);
		for (int i = 1; i <= n; i++)
			scanf("%d", a + i);
	}
	/* dynamic programming */
	{
		memset(dp, 0x3f, sizeof(dp)), dp[0] = 0;
		for (int i = 1, sum = 0; i <= n; sum += a[i++])
			for (int j = 0; j <= m; j++)
				dp[a[i] + j] = min(dp[a[i] + j], dp[j] + 1);
	}
	/* output */
	{
		printf("%d\n", dp[m]);
	}
//	system("pause");
}