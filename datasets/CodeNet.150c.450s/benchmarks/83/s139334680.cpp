#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int N,W;
int dp[110][10010];
vector<int> v(1100);
vector<int> w(1100);
int rec(int i, int j)
{
	if(dp[i][j] >= 0)
		return dp[i][j];
	int res;
	if (i == N)
		res = 0;
	else if (j < w[i])
		res = rec(i + 1, j);
	else
		res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
	return dp[i][j] = res;
}
int main()
{
	memset(dp, -1, sizeof(dp));
	cin >> N >> W;
	rep(i, N)
	{
		cin >> v[i] >> w[i];
	}
	cout << rec(0, W) << endl;
	return 0;
}
	
