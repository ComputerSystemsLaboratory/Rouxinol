#include <iostream>
using namespace std;

#define MAX 100

char m[MAX][MAX];
int h, w;
int f(int, int);

int main(void) {
	int cnt;
	while (cin >> h >> w, (h || w)) {
		cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> m[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (m[i][j] != 'x') {
					cnt++;
					f(i, j);
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}

int f(int x, int y) {
	char c = m[x][y];
	m[x][y] = 'x';

	if (x > 0) {
		if(m[x - 1][y] == c) f(x - 1, y);
	}
	if (x < h - 1) {
		if (m[x + 1][y] == c) f(x + 1, y);
	}
	if (y > 0) {
		if (m[x][y - 1] == c) f(x, y - 1);
	}
	if (y < w - 1) {
		if (m[x][y + 1] == c) f(x, y + 1);
	}
	return 0;
}