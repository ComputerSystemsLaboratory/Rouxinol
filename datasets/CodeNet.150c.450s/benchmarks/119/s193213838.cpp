#include<iostream>
using namespace std;
int map[114][514];
void dfs(int i, int j) {
	map[i][j] = 0;
	for (int a = -1; a < 2; a++) {
		for (int b = -1; b < 2; b++) {
			if (map[i + a][b + j] == 1)dfs(i + a, b + j);
		}
	}
	return;
}
int main() {
	int h, w; 
	while (cin >> h >> w, h, w) {
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= h; j++) {
				cin >> map[i][j];
			}
		}
		int ans = 0;
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= h; j++) {
				if (map[i][j]) {
					dfs(i, j);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}