# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <unordered_map>
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;
using LL = long long;

char maze[21][21];
bool ok[21][21];
int h, w;
int sx, sy;

void dfs(int hpos, int wpos) {
	ok[hpos][wpos] = true;
	maze[hpos][wpos] = '#';
	int dx[4] = { 0,1,0,-1 }, dy[4] = { -1,0,1,0 };
	for (int i = 0; i < 4; i++) {
		int nx = wpos + dx[i], ny = hpos + dy[i];
		if (0 <= nx&&nx < w && 0 <= ny&&ny < h&&maze[ny][nx] == '.')dfs(ny, nx);
	}
}

int main() {
	while (cin >> w >> h&&w&&h) {
		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 20; j++) {
				ok[i][j] = false;
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> maze[i][j];
				if (maze[i][j] == '@')sx = j, sy = i;
			}
		}
		dfs(sy, sx);
		int ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (ok[i][j])ans++;
			}
		}
		cout << ans << endl;
	}
}