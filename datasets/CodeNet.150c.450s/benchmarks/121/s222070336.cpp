#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

int H, W;
const int dx[] = {0, 0, -1, 1};
const int dy[] = {1, -1, 0, 0};
char land[105][105];

// @:リンゴ, #:カキ, *:ミカン, 0:visited
void dfs(int y, int x,char c) {
	land[y][x] = '0';
	for (int i = 0; i < 4; i++) {
		int ny = y+dy[i], nx = x+dx[i];
		if (ny >= 0 && ny < H && nx >= 0 && nx < W && land[ny][nx] == c) {
			dfs(ny, nx, c);
		}
	}
	return;
}

int main() {
	while (cin >> H >> W) {
		if (H == 0 && W == 0) break;
		for (int i = 0;  i < H; i++) {
			cin >> land[i];
		}

		int cnt = 0;
		for (int i = 0; i < H; i++) {
			for  (int j = 0; j < W; j++) {
				if (land[i][j] != '0') {
					cnt++;
					dfs(i, j, land[i][j]);
				}
			}
		}
		cout << cnt << endl;
	}

   return 0;
}

