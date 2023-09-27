#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

using namespace std;

void dfs(const vector<string> &v, vector<vector<bool>> &b, int x, int y, int& cnt) {
	b[y][x] = true;
	cnt++;
	REP(i, 4) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx<v[y].size() && nx >= 0 && ny >= 0 && ny<v.size() &&v[ny][nx] == '.' && !b[ny][nx])
			dfs(v, b, nx, ny,cnt);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int h, w;
	while (cin >> w >> h&&h) {
		vector<string> v(h);
		REP(i, h) {
			cin >> v[i];
		}
		vector<bool> b(w, false);
		vector<vector<bool> > visited(h, b);
		int y=0, x=0;
		REP(i, h) {
			if (v[i].find('@')!=size_t(-1)) {
				y = i;
				x = v[i].find('@');
			}
		}
		int cnt = 0;
		dfs(v, visited, x, y, cnt);
		cout << cnt << endl;
	}
	return 0;
}