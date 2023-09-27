#include <iostream>
using namespace std;

const int MAX = 50;
int dx[8] = { 1,0,-1,0,1,1,-1,-1 };
int dy[8] = { 0,1,0,-1,1,-1,1,-1 };
int map[MAX][MAX];
int color[MAX][MAX];

void dfs(int x, int y, int c)
{
	color[x][y] = c;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < MAX&&ny >= 0 && ny < MAX) {
			if (map[nx][ny] == 1) {
				if (color[nx][ny] == 0) {
					dfs(nx, ny, c);
				}
			}
		}
	}
}

int main()
{
	while (true) {
		int w, h;
		cin >> w >> h;

		if (w == 0 && h == 0) {
			break;
		}

		for (int i = 0; i < MAX; i++) {
			for (int j = 0; j < MAX; j++) {
				map[i][j] = 0;
				color[i][j] = 0;
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}

		int ans = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (map[i][j] == 1) {
					if (color[i][j] == 0) {
						ans++;
						dfs(i, j, ans);
					}
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}