#include<iostream>
using namespace std;

char f[103][103];

void dfs(int x, int y, int h, int w) {
	char fruit = f[x][y];
	f[x][y] = '0';

	for (int i = -1;i <= 1;i += 2) {
		int ax = x + i;
		if (0 <= ax&&ax < h&&f[ax][y] == fruit) { dfs(ax, y, h, w); }
	}

	for (int j = -1;j <= 1;j += 2) {
		int ay = y + j;
		if (0 <= ay&&ay < w&&f[x][ay] == fruit) { dfs(x, ay, h, w); }
	}
	return;
}

int main() {
	int h, w;
	while (cin >> h >> w, h, w) {
		for (int i = 0;i < h;i++) {
			for (int j = 0; j< w;j++) {
				cin >> f[i][j];
			}
		}
		int co = 0;
		for (int i = 0;i < h;i++) {
			for (int j = 0;j < w;j++) {
				if (f[i][j] != '0') {
					dfs(i, j, h, w);
					co++;
				}
			}
		}
		cout << co << endl;
	}
	return 0;
}