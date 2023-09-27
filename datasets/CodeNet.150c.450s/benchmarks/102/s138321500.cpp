#include <iostream>
#include <algorithm>
#define MH 20
#define MW 20
using namespace std;
char f[MH][MW];
bool v[MH][MW];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int w, h;
int c = 0;

void search(int x, int y) {
	++c;
	v[y][x] = true;
	for (int i = 0; i < 4; ++i) {
		int nx = x + dx[i]; int ny = y + dy[i];
		if (0 <= nx && nx < w && 0 <= ny && ny < h && v[ny][nx] == false && f[ny][nx] != '#') {
			search(nx, ny);
		}
	}
	return;
}

int main() {
	int sx, sy;

	while (cin >> w >> h, !(w == 0 && h == 0)) {
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				cin >> f[i][j];
				if (f[i][j] == '@') {
					sx = j;
					sy = i;
				}
			}
		}
		c = 0;
		fill(v[0], v[MH], false);
		search(sx, sy);
		cout << c << endl;
		
	}
	return 0;
}