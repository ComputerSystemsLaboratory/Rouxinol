#include <iostream>
#include <vector>
using namespace std;
int c[100][100];
int w, h;
void dfs(int x,int y) {
	c[x][y] = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (x + i < w&&x + i >= 0 && y + j >= 0 && y + j < h) {
				if (c[x + i][y + j] == 1) {
					dfs(x + i, y + j);
				}
			}
		}
	}
}

int main(void) {
	int ans;
	while (1) {
		ans = 0;
		cin >> w >> h;
		if (w == 0 && h == 0) {
			break;
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> c[j][i];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (c[j][i] == 1) {
					dfs(j, i);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}