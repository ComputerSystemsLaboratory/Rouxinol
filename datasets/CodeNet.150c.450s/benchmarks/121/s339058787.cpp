#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;
typedef long long ll;
ll W, H;
char a[110][110];
ll sx, sy;
ll SUM;

void dfs(int x,int y, char cur) {
	if(a[y][x]==cur) {
		a[y][x] = '-';
	}else {
		return;
	}
	int dx[4] = { -1,1,0,0 };
	int dy[4] = { 0,0,-1,1 };
	for (int i = 0; i < 4;i++) {
		int px = x + dx[i];
		int py = y + dy[i];
		if (0 <= px && px < W && 0<=py && py<H) {
			dfs(px, py, cur);
		}
	}
}

int main() {
	vector<ll> res;
	do {
		memset(a, 0, sizeof(a));
		cin >> H >> W;
		SUM = 0;
		for (int i = 0; i < H; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W;j++) {
				if (a[i][j] != '-') {
					dfs(j,i,a[i][j]);
					SUM++;
				}
			}
		}
		res.push_back(SUM);
	} while (W != 0 && H != 0);
	for (int i = 0; i < res.size() - 1;i++) {
		cout << res[i] << endl;
	}
	return 0;
}