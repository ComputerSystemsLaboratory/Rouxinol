#include <iostream>
using namespace std;

int W, H;
char b[20][20];
int ans;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void dfs(int x, int y) {
	ans++;
	b[y][x] = '#';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx && nx < W && 0 <= ny && ny < H && b[ny][nx] == '.') {
			dfs(nx, ny);
		}
	}
}

int main() {
	while (cin >> W >> H , W) {
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				cin >> b[y][x];
			}
		}

		ans = 0;

		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				if (b[y][x] == '@') {
					dfs(x, y);
				}
			}
		}
		cout << ans << endl;
	}
}