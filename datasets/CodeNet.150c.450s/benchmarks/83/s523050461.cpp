#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int dp[101][10001];
int v[100], w[100];
int main() {
	int N, W; scanf("%d%d", &N, &W);
	rep(i, N)scanf("%d%d", &v[i], &w[i]);
	rep(i, N)rep(j, W + 1) {
		if (w[i] > j)dp[i + 1][j] = dp[i][j];
		else dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
	}
	printf("%d\n", dp[N][W]);
}