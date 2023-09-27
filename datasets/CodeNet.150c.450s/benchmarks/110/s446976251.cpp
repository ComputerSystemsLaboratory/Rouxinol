#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
using namespace std;

//#define int long long
#define DBG 1
#define dump(o) if(DBG){cerr<<#o<<" "<<o<<endl;}
#define dumpc(o) if(DBG){cerr<<#o; for(auto &e:(o))cerr<<" "<<e;cerr<<endl;}
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)
#define all(c) c.begin(),c.end()
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9 + 7);
const double EPS = 1e-10;
void print_v(vector<vector<int>>aaa) {
	cout << endl;
	rep(i, 0, aaa.size()) {
		rep(j, 0, aaa.size()) {
			cout << aaa[i][j] << (j == aaa[i].size() - 1 ? '\n' : ' ');
		}
	}
}
int ans(0);
vector<string>v, g;
int h, w, n, cheese(1), bfs_cnt(0);
vector<vector<int>>s;
int bfs(int x, int y) {
	bfs_cnt = 0;
	queue<pair<int, int>>Q;
	Q.push(make_pair(x, y));
	s[x][y] = bfs_cnt++;
	while (!Q.empty()) {
		auto p = Q.front(); Q.pop();
		int a = p.first, b = p.second;
		if (a < 0 || h <= a || b < 0 || w <= b)continue;
		if (v[a][b] == 'X')continue;
		if (v[a][b] == '0' + cheese)return s[a][b];

		v[a][b] = 'X';
		if (a - 1 >= 0) {
			if (s[a - 1][b] == -1)s[a - 1][b] = s[a][b] + 1;
			Q.push(make_pair(a - 1, b));
		}
		if (a + 1 < h) {
			if (s[a + 1][b] == -1)s[a + 1][b] = s[a][b] + 1;
			Q.push(make_pair(a + 1, b));
		}
		if (b - 1 >= 0) {
			if (s[a][b - 1] == -1)s[a][b - 1] = s[a][b] + 1;
			Q.push(make_pair(a, b - 1));
		}
		if (b + 1 < w) {
			if (s[a][b + 1] == -1)s[a][b + 1] = s[a][b] + 1;
			Q.push(make_pair(a, b + 1));
		}
		
	}

}

int bfs_start() {
	vector<pair<int, int>>point(n + 1);
	rep(i, 0, h) {
		rep(j, 0, w) {
			if (g[i][j] == 'S')point[0] = make_pair(i, j);
			else if (isdigit(g[i][j])) {
				point[g[i][j] - '0'] = make_pair(i, j);
			}
		}
	}

	rep(i, 0, n) {
		s = vector<vector<int>>(h, vector<int>(w, -1));
		v = g;
		ans += bfs(point[i].first, point[i].second);
		cheese++;
	}
	return ans;
}

signed main() {
	cin >> h >> w >> n;
	rep(i, 0, h) {
		string s; cin >> s;
		g.push_back(s);
	}

	cout << bfs_start() << endl;


	return 0;
}