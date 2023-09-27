#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;

//
int dx8[8] = { -1,-1,-1, 0, 1, 1, 1, 0 };
int dy8[8] = { -1, 0, 1, 1, 1, 0,-1,-1 };
//6:28
vector<vector<int>>as;
void check(int y, int x) {
	for (int i = 0; i < 8; ++i) {
		int nx = x + dx8[i];
		int ny = y + dy8[i];
		if (as[ny][nx]) {
			as[ny][nx] = 0;
			check(ny, nx);
		}
	}
}
int main() {
	while (1) {
		as.clear();
		int w, h; cin >> w >> h;
		if (!w)break;
		as.resize(h+2);
		for (int i = 0; i <= h+1; ++i) {
			as[i].emplace_back(0);
			if (i != 0 && i != h + 1) {
				for (int j = 0; j < w; ++j) {
					int c; cin >> c;
					as[i ].emplace_back(c);
				}
			}
			else {
				for (int j = 0; j < w; ++j) {
					as[i].emplace_back(0);
				}
			}
			
			as[i].emplace_back(0);
		}
		int ans = 0;
		for (int i = 1; i <= h; ++i) {
			for (int j = 1; j <= w; ++j) {
				if (as[i][j]) {
					ans++;
					check(i, j);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}