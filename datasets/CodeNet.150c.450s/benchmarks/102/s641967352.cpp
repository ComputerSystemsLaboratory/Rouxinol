#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };

struct aa {
	int y;
	int x;
	bool black;
};

int main() {
	while (1) {
		int w, h; cin >> w >> h;
		if (!w)break;
		vector<vector<int>>field(h + 2, vector<int>(w + 2, 0));
		int sx, sy;
		for (int i = 0; i < h; ++i) {
			string st; cin >> st;
			for (int j = 0; j < w; ++j) {
				if (st[j] == '.') {
					field[i + 1][j + 1] = 1;
				}
				else {
					if (st[j] == '#') {
						field[i + 1][j + 1] = 2;
					}
					else {
						sx = j + 1;
						sy = i + 1;
						field[i + 1][j + 1] = 1;
					}
				}
			}
		}
		vector<aa>que;
		que.push_back(aa{ sy, sx, true });
		int ans = 1;
		vector<vector<bool>>used(h + 2, vector<bool>(w + 2, false));
		used[sy][sx] = true;

		while (!que.empty()) {
			aa atop(que.back());
			que.pop_back();
			for (int i = 0; i < 4; ++i) {
				const int ny = atop.y + dy[i];
				const int nx = atop.x + dx[i];
				if (atop.black) {
					if (field[ny][nx] == 1) {
						if (!used[ny][nx]) {
							used[ny][nx] = true;
							ans++;
							que.push_back(aa{ ny,nx,!atop.black });
						}
					}
				}
				else {
					if (field[ny][nx] == 1) {
						if (!used[ny][nx]) {
							used[ny][nx] = true;
							ans++;
							que.push_back(aa{ ny,nx,!atop.black });
						}
					}
				}

			}
		}
		cout << ans << endl;
	}
	return 0;
}