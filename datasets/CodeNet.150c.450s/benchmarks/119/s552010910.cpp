#include <iostream>

using namespace std;

#define PIAR pair<int, int>
int field[52][52];
int dx[] = { -1,  0, 1, 0, -1,  1, 1, -1};
int dy[] = {0 , -1, 0, 1, -1, -1, 1,  1};

void rec(int x, int y) {
	field[x][y] = 0;
	for (int i = 0; i < 8; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if (field[nextX][nextY] == 1) rec(nextX, nextY);
	}
}

int main() {
	int w, h;
	while (cin >> w >> h, w != 0 && h != 0) {
		for (int i = 0; i < 52; i++) {
			for (int j = 0; j < 52; j++) {
				field[i][j] = 0;
			}
		}

		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				cin >> field[i][j];
			}
		}

		int island = 0;
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				//??¶?????¢???
				if (field[i][j] == 1) {
					rec(i, j);
					island++;
				}
			}
		}
		cout << island << endl;
	}
}