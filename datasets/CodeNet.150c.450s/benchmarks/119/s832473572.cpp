#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
vector<vector<char> >v;
int cnt;
int w, h;

bool dfs(int x, int y) {

	if (x < 0 || h <= x)return false;
	if (y < 0 || w <= y)return false;

	if (v[x][y] == '1') {
		v[x][y] = '0';
		dfs(x - 1, y - 1);
		dfs(x - 1, y);
		dfs(x - 1, y + 1);
		dfs(x, y - 1);
		dfs(x, y + 1);
		dfs(x + 1, y - 1);
		dfs(x + 1, y);
		dfs(x + 1, y + 1);
		return true;
	}

	return false;

}


int main() {
	while (cin >> w >> h, h) {
		v = vector<vector<char> >(h, vector<char>(w));
		cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
			cin >> v[i][j];

			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (dfs(i, j))cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}