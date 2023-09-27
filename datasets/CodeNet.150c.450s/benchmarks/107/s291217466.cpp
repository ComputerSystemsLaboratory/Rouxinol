#include "bits/stdc++.h"

#define INF 200000000
#define FER 0.0000000001

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ll, int> pli;
typedef pair<double, double> pdd;

int dp[1001][1001];

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	string s1, s2;
	cin >> s1 >> s2;

	for (int i = 0; i < (s1.size() + 1); i++)
	{
		dp[i][0] = i;
	}
	for (int i = 0; i < (s2.size() + 1); i++)
	{
		dp[0][i] = i;
	}
	for (int i = 1; i < (s1.size() + 1); i++)for (int j = 1; j < (s2.size() + 1); j++)
	{
		dp[i][j] = min(min(dp[i - 1][j] + 1, dp[i][j - 1] + 1), dp[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1));
	}

	cout << dp[s1.size()][s2.size()] << endl;
	
	return 0;
}
