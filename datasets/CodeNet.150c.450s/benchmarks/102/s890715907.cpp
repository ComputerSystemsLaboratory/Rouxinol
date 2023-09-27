#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};

int W, H, ans;
string grid[22];

int rec(int x, int y) {
	int res = 1;
	
	grid[y][x] = '#';
	
	for_(d,0,4) {
		int nx = x + dx[d], ny = y + dy[d];
		if (nx < 0 || W <= nx || ny < 0 || H <= ny) continue;
		if (grid[ny][nx] == '#') continue;
		res += rec(nx, ny);
	}
	
	return res;
}

int main() {
	while (cin >> W >> H, W) {
		for_(i,0,H) cin >> grid[i];
		
		for_(i,0,H) for_(j,0,W) if (grid[i][j] == '@') cout << rec(j, i) << endl;
	}
}