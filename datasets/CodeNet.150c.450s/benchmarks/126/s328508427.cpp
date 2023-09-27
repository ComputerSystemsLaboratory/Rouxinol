#include <iostream>

using namespace std;

int m[16][16] = {0};
int a, b;

int check(int x, int y) {
	if (x < 0 || x >= a || y < 0 || y >= b) return 0;
	if (m[y][x] == -1) return 0;
	return 1;
}

int main() {
	int n, x, y;
	while (cin >> a >> b, a || b) {
		cin >> n;
		for (y = 0; y < 16; ++y)
			for (x = 0; x < 16; ++x)
				m[y][x] = 0;

		m[0][0] = 1;

		for (int i = 0; i < n; ++i) {
			cin >> x >> y;
			m[y-1][x-1] = -1;
		}
		int l = a + b - 2;
		for (int i = 0; i < l; ++i) {
			for (int n = 0; n <= i; ++n) {
				x = n;
				y = i - x;
				if (!check(x, y)) continue;
				int nx = x + 1, ny = y + 1;
				if (check(nx, y )) m[y][nx] += m[y][x];
				if (check(x,  ny)) m[ny][x] += m[y][x];
			}
		}

		cout << m[b-1][a-1] << endl;
	}
}