#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100005
#define MS(m,v) memset(m,v,sizeof(m))
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long  ll;
typedef pair<int, int> P;

int n;
int dp[105][10005];
P wv[105];
int solve(int i, int j)
{
	if (dp[i][j] > 0) return dp[i][j];

	int res;
	if (n==i)res = 0;
	else if (j < wv[i].first)res = solve(i + 1, j);
	else
	{
		res = max(solve(i + 1, j), solve(i + 1, j - wv[i].first) + wv[i].second);
	}
	dp[i][j] = res;
	return res;
}

int main()
{

	int w;
	cin >> n >> w;
	REP(i, n){
		dp[i][0] = 0;
		cin >> wv[i].second >> wv[i].first;
	}
	REP(i, w)dp[0][i] = 0;

	cout << solve(0, w) << endl;

	return 0;
}