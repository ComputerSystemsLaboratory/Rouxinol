#include <iostream>
using namespace std;
#define MAX 50

int map[MAX][MAX];
int ans, w, h;
int dx[] = { 1, 0, -1, 0, 1, 1, -1, -1 };
int dy[] = { 0, 1, 0, -1, -1, 1, 1, -1 };

void dfs(int x, int y) {
	if (x < 0 || x >= w || y < 0 || y >= h) return;
	if (map[y][x]==0) return;
	map[y][x] = 0;
	for (int i=0; i<8; i++)
		dfs(x+dx[i], y+dy[i]);
}

int main() {
	while (cin >> w >> h, w||h) {
		for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			cin >> map[i][j];

		ans=0;
		for (int i=0; i<h; i++)
		for (int j=0; j<w; j++)
			if (map[i][j]) { ans++; dfs(j, i); }

		cout << ans << endl;
	}
	return 0;
}