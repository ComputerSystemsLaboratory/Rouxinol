#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for (int i = 0; i < int(n); i++)
#define vec vector

int dp[55][55];

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1,-1,-1,  0, 0,  1, 1, 1};

void dfs(int x, int y)
{
	if (!dp[x][y]) return;
	dp[x][y] = 0;
	rep(i, 8) dfs(x + dx[i], y + dy[i]);
}

int main(void)
{
	while(1) {
		int w, h;
		cin >> w >> h;
		if (!w) break;
		rep(i, h + 2) rep(j, w + 2) dp[i][j] = 0;
		rep(i, h) rep(j, w) {
			cin >> dp[i + 1][j + 1];
		}
		
		int ret = 0;
		rep(i, h) rep(j, w) {
			if (!dp[i + 1][j + 1]) continue;
			ret++;
			dfs(i + 1, j + 1);
		}
		cout << ret << endl;
	}
	return 0;

}

		