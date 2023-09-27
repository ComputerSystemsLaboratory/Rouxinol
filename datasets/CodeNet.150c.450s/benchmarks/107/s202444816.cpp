#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;

int dp[1001][1001];
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	string a, b; cin >> a >> b;
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0;
	rep(i, a.size() + 1)rep(j, b.size() + 1) {
		if (i < a.size()) {
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + 1);
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);
			if (j < b.size()) {
				if (a[i] == b[j])dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
			}
		}
		if (j < b.size())dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + 1);
	}
	printf("%d\n", dp[a.size()][b.size()]);
}