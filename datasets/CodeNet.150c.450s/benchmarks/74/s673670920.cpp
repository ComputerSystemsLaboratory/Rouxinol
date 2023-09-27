#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int dp[60000];
int main() {
	int n, m; scanf("%d%d", &n, &m);
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	rep(i, m) {
		int c; scanf("%d", &c);
		for (int j = c; j <= n; j++)dp[j] = min(dp[j], dp[j - c] + 1);
	}
	printf("%d\n", dp[n]);
}