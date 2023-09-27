#include <cstdio>
#include <algorithm>
using namespace std;

int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
int H, W;
char a[100][101];

void dfs(char c, int x, int y) {
	a[y][x] = ' ';
	for (int i = 0; i < 4; i++) {
		int _x = x + dx[i], _y = y + dy[i];
		if (_x >= 0 && _x < W && _y >= 0 && _y < H && a[_y][_x] == c) {
			dfs(c, _x, _y);
		}
	}
}

int main() {
	for (;;) {
		scanf("%d%d", &H, &W);
		if (H == 0 && W == 0)
			break;
		for (int y = 0; y < H; y++)
			scanf("%s", a[y]);
		int ans = 0;
		for (int y = 0; y < H; y++)
			for (int x = 0; x < W; x++)
				if (a[y][x] != ' ') {
					ans++;
					dfs(a[y][x], x, y);
				}
		printf("%d\n", ans);
	}
}