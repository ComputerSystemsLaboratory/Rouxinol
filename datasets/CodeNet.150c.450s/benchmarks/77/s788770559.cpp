#include <cstring>
#include <iostream>
using namespace std;
int field[21][21];

bool check() {
	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= 20; j++) {
			if (field[i][j]) return 0;
		}
	}
	return 1;
}

int main () {
	int n;
	while (cin >> n, n) {
		memset(field, 0, sizeof(field));
		for (int i = 0; i < n; i++) {
			int x, y;
			cin >> x >> y;
			field[x][y] = 1;
		}
		int rx = 10, ry = 10, m;
		cin >> m;
		for (int i = 0; i < m; i++) {
			char d;
			int l, dx, dy;
			cin >> d >> l;
			switch (d) {
			case 'N': dx = 0, dy = +1; break;
			case 'E': dx = +1, dy = 0; break;
			case 'S': dx = 0, dy = -1; break;
			case 'W': dx = -1, dy = 0; break;
			}
			for (int j = 0; j < l; j++) {
				rx += dx; ry += dy;
				field[rx][ry] = 0;
			}
		}
		cout << (check() ? "Yes" : "No") << endl;
	}
	return 0;
}