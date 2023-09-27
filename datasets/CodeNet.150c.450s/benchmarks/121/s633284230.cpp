#include <iostream>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define MAX_H 100
#define MAX_W 100

int H, W; // Height, width
char farm[MAX_H][MAX_W]; //畑データの格納
int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };
int num; // 答えを格納する

void dfs(int x, int y, char f) {
	farm[x][y] = '.';
	REP(i, 4) {
		if (0 <= x + dx[i] && x + dx[i] < H && 0 <= y + dy[i] && y + dy[i] < W && farm[x + dx[i]][y + dy[i]] == f) {
			dfs(x + dx[i], y + dy[i], f);
		}
	}
	return;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	while (1) {
		cin >> H >> W;
		if (H == 0 && W == 0) break;

		num = 0;
		
		REP(i, H) {
			REP(j, W) cin >> farm[i][j];
		}

		REP(i, H) {
			REP(j, W) {
				if (farm[i][j] != '.') {
					dfs(i, j, farm[i][j]);
					num++;
				}
			}
		}
		cout << num << "\n";
	}

	return 0;
}
