#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int w, h;
char c[51][51];

void dfs(int x, int y) {
	c[x][y] = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			int nx = x + i, ny = y + j;
			if (0 <= nx&&nx < h && 0 <= ny&&ny < w&&c[nx][ny])
				dfs(nx, ny);
		}
	}
}
int main() {
	while (scanf("%d%d", &w, &h), w) {
		rep(i, h)rep(j, w)scanf("%d", &c[i][j]);
		int cnt = 0;
		rep(i, h)rep(j, w) {
			if (c[i][j]) {
				dfs(i, j);
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}