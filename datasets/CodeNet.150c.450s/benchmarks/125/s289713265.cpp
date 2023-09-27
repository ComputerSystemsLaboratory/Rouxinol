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
vi color(MAX, 0), d(MAX, 0), f(MAX, 0);
inline void dfs_visit(int u) {
	color[u] = GRAY;
	d[u] = ++tt;
	rep(v, 0, n) {
		if(M[u][v] == 0) continue;
		if(color[v] == WHITE) {
			dfs_visit(v);
		}
	}
	color[u] = BLACK;
	f[u] = ++tt;
}
inline void dfs() {
	rep(u, 0, n) {
		if(color[u] == WHITE) dfs_visit(u);
	}
	rep(u, 0, n) {
		cout << u + 1 << " " << d[u] << " " << f[u] << endl;
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