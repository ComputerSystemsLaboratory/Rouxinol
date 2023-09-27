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
using namespace std;
using LL = long long;
constexpr int MOD = 1000000000 + 7;
//?¶????????????????????????????????????§??????????????????????¢????????????????
constexpr int INF = 2000000000;
const double PI = acos(-1);

int maze[51][51];
int w, h;

void dfs(int hpos, int wpos) {
	maze[hpos][wpos] = 0;
	for (int x = -1; x <= 1; x++) {
		for (int y = -1; y <= 1; y++) {
			int nx = wpos + x;
			int ny = hpos + y;
			if (0 <= nx&&nx < w && 0 <= ny&&ny < h&&maze[ny][nx] == 1)dfs(ny, nx);
		}
	}
}

int main() {
	while (cin >> w >> h&&w&&h) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> maze[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (maze[i][j] == 1) {
					ans++;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
	}

}