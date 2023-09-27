#include <bits/stdc++.h>
#define INF 1000000000
typedef long long ll;
using namespace std;

int main()
{
	ll n;
	cin >> n;
	vector<ll> M(n + 1);
	cin >> M[0];
	for (int i = 1; i < n; i++) {
		cin >> M[i] >> M[i];
	}
	cin >> M[n];
	vector<vector<ll>> dp(n, vector<ll>(n, INF));
	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
	}
	for (ll k = 1; k < n; k++) {
		for (ll i = 0; i + k < n; i++) {
			for (ll j = 0; j <= i + k - 1; j++) {
				ll cost = dp[i][j] + dp[j + 1][i + k] + M[i] * M[j + 1] * M[i + k + 1];
				if (cost < dp[i][i + k]) {
					dp[i][i + k] = cost;
				}
			}
		}
	}
	cout << dp[0][n - 1] << endl;
	return 0;
}