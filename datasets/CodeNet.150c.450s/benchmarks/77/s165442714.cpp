#include <iostream>

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char dc[4] = {'E', 'N', 'W', 'S'};

int main() {
	int n;
	bool b[21][21];
	int m;
	int x, y;
	while (true) {
		std::cin >> n;
		if (n == 0) {
			break;
		}
		for (int i = 0; i < 21; i++) {
			for (int j = 0; j < 21; j++) {
				b[i][j] = false;
			}
		}
		for (int i = 0; i < n; i++) {
			std::cin >> x >> y;
			b[y][x] = true;
		}
		std::cin >> m;
		char c;
		int d;
		x = y = 10;
		if (b[y][x]) {
			b[y][x] = false;
			n--;
		}
		for (int i = 0; i < m; i++) {
			std::cin >> c >> d;
			for (int j = 0; j < 4; j++) {
				if (c != dc[j]) {
					continue;
				}
				for (int k = 0; k < d; k++) {
					x += dx[j];
					y += dy[j];
					if (b[y][x]) {
						b[y][x] = false;
						n--;
					}
				}
			}
		}
		if (n) {
			std::cout << "No" << std::endl;
		} else {
			std::cout << "Yes" << std::endl;
		}
	}
	return 0;
}