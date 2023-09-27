#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
	int w, h;
	int c[50][50] = {};

	void dfs(int i, int j) {
		c[i][j] = 0;

		for (int di = -1; di <= 1;di++) {
			for (int dj = -1; dj <= 1;dj++) {
				int ni = i + di;
				int nj = j + dj;

				if (0 <= ni&&ni < h && 0 <= nj&&nj < w && c[ni][nj] == 1) {
					dfs(ni, nj); 
				}
			}
		}
		return;
}

int main() {
	cin.sync_with_stdio(false);
	vector<int>ans;
	while (1) {
		cin >> w >> h;
		rep(i, h) {
			rep(j, w) {
				cin >> c[i][j];
			}
		}
		int res = 0;
		rep(i, h) {
			rep(j, w) {
				if (c[i][j] == 1) {
					dfs(i, j);
					res++;
				}
			}
		}
		if (w == 0&&h == 0) {
			break;
		}
		ans.push_back(res);


	}
	rep(i, ans.size()) {
		cout << ans[i] << endl;
	}

	return 0;
}