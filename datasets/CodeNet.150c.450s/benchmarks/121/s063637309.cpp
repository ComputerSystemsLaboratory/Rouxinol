#include <iostream>
using namespace std;

char map[101][101];
int h, w;

void dfs(int x, int y) {
	char now;
	int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, -1, 0, 1 }, i;
	now = map[x][y];
	map[x][y] = '.';
	for (i = 0; i < 4; i++){
		if (0 <= x + dx[i] && x + dx[i] <= h && 0 <= y + dy[i] && y + dy[i] <= w && map[x + dx[i]][y + dy[i]] == now) {
			dfs(x + dx[i], y + dy[i]);
		}
	}
}

int main() {
	int i, j, count=0;
	while (cin >> h >> w, h&&w){
		count = 0;
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				cin >> map[i][j];
			}
		}
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (map[i][j] != '.'){
					dfs(i, j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
}