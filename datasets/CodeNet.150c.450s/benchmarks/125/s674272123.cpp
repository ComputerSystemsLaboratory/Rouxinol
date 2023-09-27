#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
constexpr int MAX = 101;
enum Color { WHITE = 0, GRAY, BLACK};
int n, tt{0};
vv(int, M, MAX, MAX, 0);
vi color(MAX, 0), d(MAX, 0), f(MAX, 0), nt(MAX, 0);
inline int next(int u) {
	rep(v, nt[u], n) {
		nt[u] = v + 1;
		if(M[u][v]) return v;
	}
	return -1;
}
inline void dfs_visit(int r) {
	deque<int> S;
	S.eb(r);
	color[r] = GRAY;
	d[r] = ++tt;
	int u, v;
	while(!S.empty()) {
		u = S.back();
		v = next(u);
		if(v != -1) {
			if(color[v] == WHITE) {
				color[v] = GRAY;
				d[v] = ++tt;
				S.eb(v);
			}
		} else {
			S.pop_back();
			color[u] = BLACK;
			f[u] = ++tt;
		}
	}
}
inline void dfs() {
	tt = 0;
	rep(u, 0, n) {
		if(color[u] == WHITE) dfs_visit(u);
	}
	rep(i, 0, n) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
}
int main() {
	cin >> n;
	int u, k, v;
	rep(i, 0, n) {
		cin >> u >> k;
		--u;
		rep(j, 0, k) {
			cin >> v;
			M[u][--v] = 1;
		}
	}
	dfs();
	return 0;
}