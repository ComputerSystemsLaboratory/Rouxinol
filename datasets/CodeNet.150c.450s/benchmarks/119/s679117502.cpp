#include<iostream>
using namespace std;

char mp[55][55];

void dfs(int x, int y, int n, int m) {
	mp[x][y] = '0';

	for (int i = -1;i <= 1;i++) {
		for (int j = -1;j <= 1;j++) {
			int ax = x + i;
			int ay = y + j;
			if (ax >= 0 && ay >= 0 && ax < m&&ay < n&&mp[ax][ay] == '1') {
				dfs(ax, ay,n,m);
			}
		}
	}
	return;
}

int main() {
	int n, m;
	while (cin >> n >> m, n, m) {
		for (int i = 0;i < m;i++)
			for(int j=0;j<n;j++)cin >> mp[i][j];

		int al = 0;
		for (int i = 0;i < m;i++) {
			for (int j = 0;j < n;j++) {
				if (mp[i][j] == '1') {
					dfs(i, j, n, m);
					al++;
				}
			}
		}
		cout << al << endl;
	}
	return 0;
}