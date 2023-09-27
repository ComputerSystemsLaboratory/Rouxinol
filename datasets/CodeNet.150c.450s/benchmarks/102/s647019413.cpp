#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int w, h;
string mp[20];

int dfs(int x, int y) {
	int res = 1;
	mp[y][x] = '#';
	int dx[4] = {-1, 0, 1, 0};
	int dy[4] = { 0,-1, 0, 1};
	rep(i, 4) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(0<=nx && nx<w && 0<=ny && ny<h && mp[ny][nx]=='.') {
			res += dfs(nx, ny);
		}
	}
	return res;
}

int main() {
	while(cin >> w >> h, w||h) {
		int sx, sy;
		rep(i, h) {
			cin >> mp[i];
			rep(j, w) {
				if(mp[i][j] == '@') {
					sx = j;
					sy = i;
				}
			}
		}
		cout << dfs(sx, sy) << endl;
	}
	return 0;
}