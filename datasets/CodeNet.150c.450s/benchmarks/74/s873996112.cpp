#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define MOD 10000

typedef long long ll;
typedef pair<int, string> P;

int main(){
	cin.tie(0);
  ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	int c[m];
	for (int i = 0; i < m; i++) cin >> c[i];
	int dp[m+1][n+1];

	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= n; j++)
			dp[i][j] = 0;

	for(int j = 0 ; j <= n ; j++) dp[0][j] = INF;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (c[i-1] > j) dp[i][j] = dp[i-1][j];
			else dp[i][j] = min(dp[i-1][j], dp[i][j-c[i-1]]+1);
		}
	}

	cout << dp[m][n] << endl;

	return 0;
}