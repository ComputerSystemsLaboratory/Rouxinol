#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
#include <math.h>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <functional>

using namespace std;

typedef long long int ll;
typedef std::pair<int, int> pii;
typedef std::pair<ll, int> pli;
typedef std::pair<ll, ll> pll;

#define FOR(i,n,m) for(ll i=(ll)(m);i<(ll)(n);++i)
#define REP(i,n) FOR(i,n,0)
#define IREP(i,n) for(ll i=(ll)(n);i>=0;--i)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll)1e15;

//! [Sのi文字目][Tのj文字目]
int dp[1005][1005];

int main()
{
	string S, T;
	cin >> S >> T;
	REP(i, S.length() + 1)
	{
		dp[i][0] = i;
	}
	REP(i, T.length() + 1)
	{
		dp[0][i] = i;
	}
	FOR(i, S.length() + 1, 1)
	{
		FOR(j, T.length() + 1, 1)
		{
			int cost = 0;
			if (S[i - 1] != T[j - 1])cost = 1;
			dp[i][j] = std::min(dp[i - 1][j] + 1, std::min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + cost));
		}
	}
	cout << dp[S.length()][T.length()] << endl;
	return 0;
}
