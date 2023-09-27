#include <iostream>
#include <cstring>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int dp[16][16], a, b, n;

int main() {

	while (1) {
		memset(dp, 0, sizeof(dp));
		cin >> a >> b;
		if (a == 0 && b == 0) break;

		cin >> n;

		REP(i, n) {
			int x, y;
			cin >> x >> y;
			dp[y-1][x-1] = -1;
		}

		dp[0][0] = 1;
		REP(i, b) {
			REP(j, a) {
				if (i == 0 && j == 0) continue;

				if (dp[i][j] == -1) dp[i][j] = 0;
				else if (i - 1 < 0) dp[i][j] = dp[i][j-1];
				else if (j - 1 < 0) dp[i][j] = dp[i-1][j];
				else dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		cout << dp[b-1][a-1] << endl;
	}

	return 0;
}