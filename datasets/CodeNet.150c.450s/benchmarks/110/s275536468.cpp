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
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;

int h, w, n;
char maze[1001][1001];
int x[10];
int y[10];

char Map[1001][1001];
int d[1001][1001];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };
int bfs(int sx,int sy,int gx,int gy) {
	queue<pair<int, int>> que;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			d[i][j] = INF;
		}
	}
	que.push(pair<int, int>(sx, sy));
	d[sy][sx] = 0;
	while (que.size()) {
		pair<int, int> p = que.front();
		que.pop();
		if (p.first == gx&&p.second == gy) {
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx = p.first + dx[i], ny = p.second + dy[i];
			if (0 <= nx&&nx < w && 0 <= ny&&ny <= h&&Map[ny][nx] != 'X'&&d[ny][nx] == INF) {
				que.push(pair<int, int>(nx, ny));
				d[ny][nx] = d[p.second][p.first] + 1;
			}
		}
	}
	return d[gy][gx];
}

void copy() {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			Map[i][j] = maze[i][j];
		}
	}
}

int main() {
	cin >> h >> w >> n;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'S')x[0] = j, y[0] = i;
			if (maze[i][j] == '1')x[1] = j, y[1] = i;
			if (maze[i][j] == '2')x[2] = j, y[2] = i;
			if (maze[i][j] == '3')x[3] = j, y[3] = i;
			if (maze[i][j] == '4')x[4] = j, y[4] = i;
			if (maze[i][j] == '5')x[5] = j, y[5] = i;
			if (maze[i][j] == '6')x[6] = j, y[6] = i;
			if (maze[i][j] == '7')x[7] = j, y[7] = i;
			if (maze[i][j] == '8')x[8] = j, y[8] = i;
			if (maze[i][j] == '9')x[9] = j, y[9] = i;
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		copy();
		ans += bfs(x[i], y[i], x[i + 1], y[i + 1]);
	}
	cout << ans << endl;
}