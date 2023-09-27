#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)





int N, W;
int v[100], w[100];
//-----------------------------------------------------------------
int dp[101][10001];
int rec(int i, int j) {
	if (0 <= dp[i][j]) return dp[i][j];
	if (i == N) return 0;

	int ret = rec(i + 1, j);
	if (j + w[i] <= W) ret = max(ret, rec(i + 1, j + w[i]) + v[i]);
	return dp[i][j] = ret;
}
//-----------------------------------------------------------------
int main() {
	cin >> N >> W;
	rep(i, 0, N) cin >> v[i] >> w[i];

	// dp[i][j] == -1 means this case isn't calculated yet
	rep(i, 0, 101) rep(j, 0, 10001) dp[i][j] = -1;

	cout << rec(0, 0) << endl;
}