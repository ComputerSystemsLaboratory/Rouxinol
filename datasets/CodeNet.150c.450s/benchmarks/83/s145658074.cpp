#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
#define SAFE_FREE(ptr) if( ptr != NULL ){ free(ptr); ptr = NULL; }
typedef unsigned int UINT;
typedef long long ll;
typedef pair<int, int> P;


int N, W;
int v[105], w[105];
int dp[105][10005];

int solve(int i, int j)//jは残りの重さ
{
	if (dp[i][j] >= 0)return dp[i][j];
	int res;//res,solve,dpには価値が入っている　iはインデント
	if (i==N)res = 0;
	else if (w[i] > j) res = solve(i + 1, j); 
	else{ 
		res = max(solve(i + 1, j), solve(i + 1, j - w[i])+v[i]); 
	}
	dp[i][j] = res;
	return res;
}

int main()
{
	cin >> N >> W;
	REP(i, N)cin >> v[i] >> w[i];
	REP(i, 105)REP(j, 10005)dp[i][j] = -1;
	cout << solve(0, W) << endl;
	return 0;
}