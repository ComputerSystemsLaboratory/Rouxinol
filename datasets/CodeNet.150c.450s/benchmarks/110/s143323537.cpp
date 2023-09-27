#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> P;

#define MP make_pair

const int INF = (1<<30);

char mp[1000][1000];

int h, w, n;

int dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};
P coords[10];

P s, g;
int memo[10][1000][1000];

int f(char c)
{
	if (c == 'S') return 0;
	if (c == '1') return 1;
	if (c == '2') return 2;
	if (c == '3') return 3;
	if (c == '4') return 4;
	if (c == '5') return 5;
	if (c == '6') return 6;
	if (c == '7') return 7;
	if (c == '8') return 8;
	if (c == '9') return 9;
}

int bfs(int goal) // arihon ha saikou
{
	queue<P> que;
	que.push(s);

	memo[goal][s.first][s.second] = 0;

	while (que.size()) {
		P p = que.front(); que.pop();
		if (p.first == g.first && p.second == g.second) break;

		for (int i = 0; i < 4; ++i) {
			int ny = p.first + dy[i], nx = p.second + dx[i];
			if (0 <= ny && ny < h && 0 <= nx && nx < w && mp[ny][nx] != 'X' && memo[goal][ny][nx] == INF) {
				que.push(MP(ny, nx));
				memo[goal][ny][nx] = memo[goal][p.first][p.second] + 1;
			}
		}
	}

	return memo[goal][g.first][g.second];
}

int main()
{
	cin >> h >> w >> n;

	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			cin >> mp[i][j];
			if (('1' <= mp[i][j] && mp[i][j] <= '9') || mp[i][j] == 'S') {
				int idx = f(mp[i][j]);
				coords[idx] = MP(i, j);
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < h; ++j) {
			for (int k = 0; k < w; ++k) {
				memo[i][j][k] = INF;
			}
		}
	}

	int ans = 0;

	for (int i = 1; i <= n; ++i) {
		s = coords[i - 1], g = coords[i];
		ans += bfs(i);
	}

	printf("%d\n", ans);
}