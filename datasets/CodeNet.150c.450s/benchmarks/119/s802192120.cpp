#include <iostream>

using namespace std;

int w, h;
int c[55][55], ans;

void dfs(int y, int x) {
	c[y][x] = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int ny = y + i, nx = x + j;
			if (ny >= 0 && ny < h&&nx >= 0 && nx < w)
				if (c[ny][nx] == 1)
					dfs(ny, nx);
		}
	}
}

int main() {
	while (cin >> w >> h&&w + h) {
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> c[i][j];
		ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (c[i][j] == 1)
					dfs(i, j),ans++;
			}
		}
		cout << ans << endl;
	}
	
}