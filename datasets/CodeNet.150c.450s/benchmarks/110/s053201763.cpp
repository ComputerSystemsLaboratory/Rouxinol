# include <iostream>
# include <queue>
# include <cctype>
typedef std::pair<int, int> P;

const int INF = 100000;
const int MAX_H = 1000;
const int MAX_W = 1000;
const int MAX_N = 9;

int dx[4] = { 1,-1,0,0 }, dy[4] = { 0,0,1,-1 };
int h, w, n;
int d[MAX_H][MAX_W];
char ch[MAX_H][MAX_W];
P p[MAX_N + 1];

int bfs(P s, P g) {
	for (int i = 0; i<h; ++i) {
		for (int j = 0; j<w; ++j)
			d[i][j] = INF;
	}
	std::queue<P> que;
	que.push(s);
	d[s.second][s.first] = 0;
	while (!que.empty()) {
		P x = que.front(); que.pop();
		if (x == g)
			break;
		for (int i = 0; i < 4; ++i) {
			int nx = x.first + dx[i];
			int ny = x.second + dy[i];
			if (nx >= 0 && ny >= 0 && nx < w && ny < h && d[ny][nx] == INF && ch[ny][nx] != 'X') {
				que.push(P(nx, ny));
				d[ny][nx] = d[x.second][x.first] + 1;
			}
		}
	}
	return d[g.second][g.first];
}

int solve() {
	int res = 0;
	for (int i = 1; i <= n; ++i) {
		res += bfs(p[i - 1], p[i]);
	}
	return res;
}

int main() {
	std::cin >> h >> w >> n;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			std::cin >> ch[i][j];
			if (std::isdigit(ch[i][j])) {
				p[atoi(&ch[i][j])].first = j;
				p[atoi(&ch[i][j])].second = i;
			}
			else if (ch[i][j] == 'S') {
				p[0].first = j;
				p[0].second = i;
			}
		}
	}
	std::cout << solve() << std::endl;
	return 0;
}