#include<iostream>
using namespace std;

int field[50][50];
const int dx[] = { -1,-1,-1,0,0,1,1,1 };
const int dy[] = { -1,0,1,-1,1,-1,0,1 };

int w, h;

void crawler(int y, int x) {
	field[y][x] = 0;
	for (int i = 0; i < 8; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || w <= nx || h <= ny)continue;
		if (field[ny][nx] == 1)crawler(ny, nx);
	}
}

int main() {
	while (cin >> w >> h, w | h) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> field[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (field[i][j] == 1) {
					crawler(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}