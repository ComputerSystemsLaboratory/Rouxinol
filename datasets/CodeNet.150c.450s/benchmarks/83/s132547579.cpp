#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i, a, n) for(int i=a; i<n; i++)

int dp[101][10001];
int main()
{
	int N, W;
	int v[101], w[101];

	cin >> N >> W;
	REP(i, 0, N) cin >> v[i] >> w[i];
	REP(i, 0, 101) REP(j, 0, 10001) dp[i][j] = 0;

	REP(i, 0, N) {
		REP(j, 0, W + 1) {
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
			if (j + w[i] <= W) dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
		}
	}

	int ans = -1;
	REP(j, 0, W + 1) ans = max(ans, dp[N][j]);
	cout << ans << endl;
    return 0;
}