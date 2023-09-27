#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int dp[1001][1001];
int main() {
	int q; scanf("%d", &q);
	rep(i, q) {
		string x, y; cin >> x >> y;
		rep(i, x.size())rep(j, y.size()) {
			if (x[i] == y[j])dp[i + 1][j + 1] = dp[i][j] + 1;
			else dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
		printf("%d\n", dp[x.size()][y.size()]);
	}
}