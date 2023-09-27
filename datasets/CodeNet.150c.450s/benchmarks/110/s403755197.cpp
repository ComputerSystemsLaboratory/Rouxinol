#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;

//// < "D:\D_Download\Visual Studio 2015\Projects\programing_contest_c++\Debug\a.txt"
struct aa {
	int x;
	int y;
	int time;
};

const int dx[4] = { -1,0,1,0 };
const int dy[4] = { 0,1,0,-1 };
int getdis(const int fromx, const int fromy, const int gx, const int gy,const vector<vector<int>>&field) {
	vector<vector<int>>memo(1002, vector<int>(1002, 99999999));
	memo[fromy][fromx] = 0;
	queue<aa>que;
	que.push(aa{ fromx,fromy,0 });
	int ans = 0;
	while (!que.empty()) {
		aa atop = que.front();
		que.pop();
		const int ax = atop.x;
		const int ay = atop.y;
		if (ax == gx&&ay == gy) {
			ans = atop.time;
			break;
		}
		for (int i = 0; i < 4; ++i) {
			const int nex = ax + dx[i];
			const int ney = ay + dy[i];
			if (field[ney][nex]) {

			}
			else {
				if (memo[ney][nex]>atop.time + 1) {
					memo[ney][nex] = atop.time + 1;
					que.push(aa{ nex,ney,atop.time + 1 });
				}
			}
		}
	}
	return ans;
}

int main() {
	int H, W, C; cin >> H >> W >> C;
	vector<vector<int>>field(H + 2, vector<int>(W + 2,1));
	vector<int>xs(C+1), ys(C + 1);
	int sx, sy;
	for (int i = 0; i < H; ++i) {
		string st; cin >> st;
		for (int j = 0; j < W; ++j) {
			if (st[j] == '.')field[i + 1][j + 1] = false;
			else if (st[j] == 'X') {

			}
			else {
				field[i + 1][j + 1] = false;
				if (st[j] == 'S') {
					xs[0] = j + 1;
					ys[0] = i + 1;
				}
				else {
					xs[st[j] - '0'] = j + 1;
					ys[st[j] - '0'] = i + 1;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < C; ++i) {
		ans += getdis(xs[i], ys[i], xs[i + 1], ys[i + 1], field);
	}
	cout << ans << endl;
	return 0;
}