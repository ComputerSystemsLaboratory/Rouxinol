#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1ll<<60;

constexpr ll MAX = 100010;
ll dp[MAX];

int main(int argc, char **argv)
{
	ll n; cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; ++i) cin >> v[i];
	for (ll i = 0; i < MAX; ++i) dp[i] = INF;
	dp[0] = v[0];

	ll len = 1;
	for (ll i = 1; i < n; ++i)
	{
		if (dp[len-1] < v[i]) dp[len++] = v[i];
		else *lower_bound(dp, dp+len, v[i]) = v[i];
	}
	std::cout << len << std::endl;
}

