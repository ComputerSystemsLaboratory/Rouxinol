#include <iostream>

using namespace std;;

int c[100][100],w,h;

void dfs(int a, int b) {
	c[a][b] = 0;
	for (int k = -1; k <= 1; k++) {
		for (int l = -1; l <= 1; l++) {
				if (a + k >= 0 && a + k < h&&b + l >= 0 && b + l < w) {
					if (c[a + k][b + l] == 1){
					dfs(a + k, b + l);
				}
			}
		}
	}
	return;
}

int main() {
	while (1) {
		int ans = 0;
		cin >> w >> h;
		if (w == 0 && h == 0) {
			break;
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> c[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (c[i][j] == 1) {
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}