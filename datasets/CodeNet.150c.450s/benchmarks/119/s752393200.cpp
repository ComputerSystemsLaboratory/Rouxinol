# include <iostream>

const int MAX_W = 50;
const int MAX_H = 50;

int w, h;

int c[MAX_H][MAX_W];

int dx[8] = { 0,-1,-1,-1,0,1,1,1 }, dy[8] = { -1,-1,0,1,1,1,0,-1 };

void dfs(int x, int y) {
	c[y][x] = 0;
	for (int i = 0; i < 8; ++i) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < w&&ny < h&&c[ny][nx] == 1)
			dfs(nx, ny);
	}
}

int solve() {
	int sum = 0;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (c[i][j] == 1) {
				++sum;
				dfs(j, i);
			}
		}
	}
	return sum;
}

int main() {
	while (1) {
		std::cin >> w >> h;
		if ((w + h) == 0)
			break;
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j)
				std::cin >> c[i][j];
		}
		int res = solve();
		std::cout << res << std::endl;
	}
	return 0;
}