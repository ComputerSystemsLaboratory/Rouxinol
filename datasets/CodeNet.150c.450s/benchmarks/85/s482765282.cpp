#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

typedef long long ll;

const ll oo = 0x3f3f3f3f3f3f3f3f;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> v(n + 1);
	for(int i = 0; i < n; ++i)
		cin >> v[i] >> v[n];

	vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, oo));

	for(int l = 0; l < 2; ++l)
		for(int i = 0; i + l <= n; ++i)
			dp[i][i + l] = 0;

	for(int l = 2; l <= n; ++l)
		for(int i = 0; i + l <= n; ++i)
			for(int k = i + 1; k < i + l; ++k)
				dp[i][i + l] = min(dp[i][i + l],
								   dp[i][k] + dp[k][i + l] + (ll) v[k] * v[i] * v[i + l]);

	cout << dp[0][n] << endl;

    return 0;
}
