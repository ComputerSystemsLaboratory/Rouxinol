#include<iostream>
#include<cstdio>
#include<array>
#include<vector>

using namespace std;

vector<vector<int>>tile(22, vector<int>(22));

array<int, 4>mx = { -1,0,0,1 };
array<int, 4>my = { 0,-1,1,0 };

void walk(int x, int y) {
	tile[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		if (tile[x + mx[i]][y + my[i]] != 0)continue;
		walk(x + mx[i], y + my[i]);
	}
}

int main() {
	int w, h;
	while (cin >> w >> h, w) {
		int stx, sty;
		for (auto &i : tile) {
			for (auto &j : i) {
				j = -1;
			}
		}
		for (int i = 1; i <= h; i++) {
			for (int j = 1; j <= w; j++) {
				char ti;
				cin >> ti;
				if (ti == '.')tile[j][i] = 0;
				else if (ti == '#')tile[j][i] = -1;
				else {
					tile[j][i] = 1;
					stx = j; sty = i;
				}
			}
		}
		walk(stx, sty);
		int ans = 0;
		for (auto i : tile) {
			for (auto j : i) {
				if (j == 1)ans++;
			}
		}
		printf("%d\n", ans);
	}
}