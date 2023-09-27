#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll INF = 1ll << 60;
string s1, s2;
ll dp[1010][1010];

int main(int argc, char **argv)
{
	cin >> s1 >> s2;

	for (ll i = 0; i < 1010; ++i) for (ll j = 0; j < 1010; ++j) dp[i][j] = INF;
	dp[0][0] = 0;
	for (ll i = 0; i <= s1.size(); ++i) dp[i][0] = i;
	for (ll i = 0; i <= s2.size(); ++i) dp[0][i] = i;
	
	for (ll i = 0; i < s1.size(); ++i)
	{
		for (ll j = 0; j < s2.size(); ++j)
		{
			dp[i+1][j+1] = min({dp[i+1][j+1], dp[i+1][j]+1, dp[i][j+1]+1});
			if (s1[i] == s2[j]) dp[i+1][j+1] = min({dp[i+1][j+1], dp[i][j]});
			else dp[i+1][j+1] = min({dp[i+1][j+1], dp[i][j]+1});
		}
	}
	std::cout << dp[s1.size()][s2.size()] << std::endl;
}

