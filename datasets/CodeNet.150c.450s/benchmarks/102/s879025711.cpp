#include <iostream>

using namespace std;

const int MAX_SIZE = 21;
int w, h;

int dx[] = {-1, 0, 0, 1},
	dy[] = {0, 1, -1, 0};

char field[MAX_SIZE][MAX_SIZE];

bool ok(int x, int y) {
	return (x >= 0 && x < w && y >= 0 && y < h) && field[y][x] == '.';
}

int solve(int x, int y) {
	int ret = 0;
	for (int i = 0; i < 4; ++i) {
		int curx = x + dx[i],
			cury = y + dy[i];

		if (ok(curx, cury)) {
			field[cury][curx] = '#';
			ret += solve(curx, cury) + 1;
		}
	}
	return ret;
}

int main() {
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		int x = -1, y = -1;
		for (int i = 0; i < h; ++i) for (int j = 0; j < w; ++j) {
			cin >> field[i][j];
			if (field[i][j] == '@') {
				field[i][j] = '#';
				x = j;
				y = i;
			}
		}

		cout << solve(x, y) + 1 << endl;

	}

	return 0;
}