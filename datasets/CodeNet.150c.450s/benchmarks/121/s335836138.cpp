#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <cmath>
#include <sstream>
#include <algorithm>

using namespace std;
vector<vector<char> > map;
int H, W;

void dfs(int y,int x, char c) {
	int dx[4] = { 0,0,1,-1 };
	int dy[4] = { 1,-1,0,0 };
	map[y][x] = 'x';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || W - 1 < nx || ny < 0 || H - 1 < ny)continue;
		if (c == map[ny][nx]) {
			dfs(ny,nx, c);
		}
	}
}

int main() {
	while (1) {
		int count = 0;
		cin >> H >> W;
		if (H + W == 0) break;
		map.resize(H);
		for (int i = 0; i < H; i++) {
			map[i].resize(W);
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> map[i][j];
			}
		}

		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (map[i][j] != 'x') {
					dfs(i,j,map[i][j]);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}