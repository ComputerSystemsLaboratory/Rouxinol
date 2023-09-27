#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define vec vector

int dx[8] = {0, 0, 1, 1, 1,-1,-1,-1};
int dy[8] = {1,-1,-1, 0, 1,-1, 0, 1};

int dp[55][55];
int c[55][55];

int check(int x, int y)
{
	if (dp[x][y]) return 0;
	if (c[x][y] == 0) return 0;
	dp[x][y] = 1;
	
	rep(i, 8) {
		int xx = x + dx[i];
		int yy = y + dy[i];
		int take = check(xx, yy);
	}
	return 1;
}

int main(void)
{
	while(1) {
		int w, h;
		cin >> w >> h;
		if (w == 0) break;
		rep(i, 55) rep(j, 55) c[i + 1][j + 1] = 0;
		rep(i, h) rep (j, w) cin >> c[i + 1][j + 1];
		rep(i, 55) rep(j, 55) dp[i][j] = 0;
		rep(i, 55) {
			dp[0][i] = 1;
			dp[i][0] = 1;
			dp[h + 1][i] = 1;
			dp[i][w + 1] = 1;
		}

		int ans = 0;
		rep(i, h) rep(j, w) if (c[i + 1][j + 1]) ans += check(i + 1, j + 1);
		cout << ans << endl;
	}
	return 0;
}