#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1000000007;
constexpr ll INF = 1ll<<60;

ll dp[110][110];

int main(int argc, char **argv)
{
	ll v, e; cin >> v >> e;

	for (ll i = 0; i < v; ++i) for (ll j = 0; j < v; ++j) dp[i][j] = (i!=j)*INF;

	for (ll i = 0; i < e; ++i)
	{
		ll s, t, d; cin >> s >> t >> d;
		dp[s][t] = d;
	}

	for (ll via = 0; via < v; ++via)
		for (ll s = 0; s < v; ++s)
			for (ll g = 0; g < v; ++g)
				dp[s][g] = min(dp[s][via] + dp[via][g], dp[s][g]);

	for (ll i = 0; i < v; ++i)
	{
		if (dp[i][i] < 0)
		{
			std::cout << "NEGATIVE CYCLE" << std::endl;
			return 0;
		}
	}

	for (ll i = 0; i < v; ++i)
	{
		for (ll j = 0; j < v; ++j)
		{
			if (j) std::cout << " ";
			if (dp[i][j]*2 > INF)
				std::cout << "INF";
			else
				std::cout << dp[i][j];
		}
		std::cout << std::endl;
	}
	
}

