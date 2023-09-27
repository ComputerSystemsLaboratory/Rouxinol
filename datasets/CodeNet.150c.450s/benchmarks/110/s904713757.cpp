#include "bits/stdc++.h"
using namespace std;
#ifdef _DEBUG
#include "dump.hpp"
#else
#define dump(...)
#endif

//#define int long long
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rrep(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define all(c) begin(c),end(c)
const int INF = sizeof(int) == sizeof(long long) ? 0x3f3f3f3f3f3f3f3fLL : 0x3f3f3f3f;
const int MOD = (int)(1e9) + 7;
template<class T> bool chmax(T &a, const T &b) { if (a < b) { a = b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a > b) { a = b; return true; } return false; }

int H, W, N;
char c[1010][1010];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
bool flag[1010][1010];

bool inrange(int i, int j) { return i >= 0 && i < H && j >= 0 && j < W; }

int bfs(int si, int sj, int gi, int gj) {
	using State = tuple<int, int, int>;
	queue<State> q;
	q.emplace(si, sj, 0);
	memset(flag, false, sizeof(flag));
	while (q.size()) {
		int ci, cj, cnt;
		tie(ci, cj, cnt) = q.front(); q.pop();
		if (!inrange(ci, cj))continue;
		if (ci == gi&&cj == gj)return cnt;
		if (flag[ci][cj])continue;
		flag[ci][cj] = true;
		if (c[ci][cj] == 'X')continue;
		rep(i, 0, 4) {
			int ni = ci + dy[i], nj = cj + dx[i];
			q.emplace(ni, nj, cnt + 1);
		}
	}
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> H >> W >> N;
	vector<tuple<int, int, int>> v;
	rep(i, 0, H)rep(j, 0, W) {
		cin >> c[i][j];
		if (c[i][j] == 'S') {
			v.emplace_back(0, i, j);
		}
		else if ('1' <= c[i][j] && c[i][j] <= '9') {
			v.emplace_back(c[i][j] - '0', i, j);
		}
	}
	sort(all(v));
	int ans = 0;
	rep(i, 0, v.size() - 1) {
		int ci, cj, ni, nj;
		tie(ignore, ci, cj) = v[i];
		tie(ignore, ni, nj) = v[i + 1];
		ans += bfs(ci, cj, ni, nj);
	}
	cout << ans << endl;
	return 0;
}