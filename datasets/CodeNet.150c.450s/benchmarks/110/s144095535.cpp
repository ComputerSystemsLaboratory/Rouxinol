#include <algorithm>
#include <cstdio>
#include <queue>
using namespace std;

typedef pair<int, int> P;

const int INF = 1000000;
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
int H, W;
bool a[1000][1000];
int d[1000][1000];

int bfs(int sx, int sy, int gx, int gy) {
	for (int y = 0; y < H; y++)
		fill_n(d[y], W, INF);
	d[sy][sx] = 0;
	queue<P> que;
	que.push(P(sx, sy));
	while (!que.empty()) {
		P p = que.front();
		que.pop();
		int x = p.first, y = p.second;
		if (x == gx && y == gy)
			return d[y][x];
		for (int i = 0; i < 4; i++) {
			int _x = x + dx[i], _y = y + dy[i];
			if (_x >= 0 && _x < W && _y >= 0 && _y < H && !a[_y][_x] && d[_y][_x] == INF) {
				d[_y][_x] = d[y][x] + 1;
				que.push(P(_x, _y));
			}
		}
	}
}


int main() {
	int N;
	scanf("%d%d%d", &H, &W, &N);
	int xi[10], yi[10];
	for (int y = 0; y < H; y++) {
		char s[1001];
		scanf("%s", s);
		for (int x = 0; x < W; x++) {
			a[y][x] = (s[x] == 'X');
			if (s[x] == 'S') {
				xi[0] = x;
				yi[0] = y;
			}
			if (s[x] >= '1' && s[x] <= '9') {
				int i = s[x] - '0';
				xi[i] = x;
				yi[i] = y;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < N; i++)
		ans += bfs(xi[i], yi[i], xi[i + 1], yi[i + 1]);
	printf("%d\n", ans);
	return 0;
}