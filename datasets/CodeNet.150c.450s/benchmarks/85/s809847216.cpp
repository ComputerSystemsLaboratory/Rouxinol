#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);

	int n;
	cin >> n;
	ll a, b;
	vector<pair<ll, ll>> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		v.push_back({a, b});
	}

	vector<vector<ll>> dp(n, vector<ll>(n, -1));
	function<ll(int, int)> f = [&](int i, int j)
	{
		if (i == j)
			return 0LL;

		if (dp[i][j] != -1)
			return dp[i][j];

		ll r = 1LL<<62;
		for (int k = i; k < j; ++k)
			r = min(r, f(i, k)+f(k+1, j)+v[i].first*v[j].second*v[k].second);

		return dp[i][j]=r;
	};

	cout << f(0, n-1) << "\n";

	return 0;
}

