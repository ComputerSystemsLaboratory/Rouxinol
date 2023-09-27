#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int m, n;
char a[101][101];
int dir[4][2] = { {-1,0},{1,0},{0,1},{0,-1} };
bool vis[101][101];
bool in(int x, int y) {
	return x >= 0 && x < m&&y >= 0 && y < n;
}
void dfs(int x, int y, char c) {
	for (int i = 0; i < 4; i++) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		if (in(tx, ty) && !vis[tx][ty] && a[tx][ty] == c) {
			vis[tx][ty] = 1;
			dfs(tx, ty, c);
		}
	}
}
int main() {
	int t;
	while (cin >> m >> n && (m || n)) {
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < m; i++)
			cin >> a[i];
		int k = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (!vis[i][j]) {
					vis[i][j] = 1;
					dfs(i, j, a[i][j]);
					k++;
				}
			}
		}
		cout << k << endl;
	}
	//system("pause");
	return 0;
}
