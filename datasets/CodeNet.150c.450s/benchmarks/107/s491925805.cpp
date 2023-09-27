#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int dp[1001][1001];
int main() {
	string a, b; cin >> a >> b;
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0;
	rep(i, a.size() + 1)rep(j, b.size() + 1) {
		if (i < a.size())dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);//delete
		if (j == b.size())continue;
		dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 1);//insert
		if (i == a.size())continue;
		if (a[i] == b[j])dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);//sonomama
		dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);//replace
	}
	printf("%d\n", dp[a.size()][b.size()]);
}