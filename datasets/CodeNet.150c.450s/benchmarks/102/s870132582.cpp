#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int w, h;
char a[21][21];
int dx[]{ 1,-1,0,0 }, dy[]{ 0,0,1,-1 };
int cnt;

void dfs(int x, int y) {
	a[x][y] = 0;
	rep(i, 4) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx&&nx < h && 0 <= ny&&ny < w&&a[nx][ny] == '.') {
			cnt++; dfs(nx, ny);
		}
	}
}
int main() {
	while (scanf("%d%d", &w, &h), w) {
		cnt = 1;
		rep(i, h)scanf("%s", a[i]);
		rep(i, h)rep(j, w) {
			if (a[i][j] == '@') {
				dfs(i, j);
				break;
			}
		}
		printf("%d\n", cnt);
	}
}