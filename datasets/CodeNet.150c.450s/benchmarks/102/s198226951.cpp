#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reps(i,s,n) for(int i=(int)(s);i<(int)(n);i++)

int w, h;
char t[20][20];
void dfs(int i, int j) {
	t[i][j] = '*';
	for (int di = -1; di <= 1;di++) {
			for (int dj = -1;dj <= 1;dj++) {
				int ni = i + di;
				int nj = j + dj;
				if (di!=dj && di+dj!=0 && ni >= 0 && ni < h&&nj >= 0 && nj < w&&t[ni][nj] == '.') {
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
		if (w == 0)break;
		rep(i, h) {
			rep(j,w) {
				cin >> t[i][j];
			}
		}
		rep(i, h) {
			rep(j, w) {
				if (t[i][j] == '@') {
					dfs(i, j);
					break;
				}
			}
		}
		int count = 0;
		rep(i, h) {
			rep(j, w) {
				if (t[i][j] == '*') {
					count++;
				}
			}
		}
		ans.push_back(count);
	}
	rep(i, ans.size()) {
		cout << ans[i] << endl;
	}

	return 0;
}