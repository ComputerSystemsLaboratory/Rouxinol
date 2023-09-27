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
constexpr int MAX = 1e6;
constexpr int NIL = -1;
int n;
vi G[MAX];
vi color(MAX, NIL);
inline void dfs(int r, int c) {
	deque<int> S;
	S.eb(r);
	color[r] = c;
	int u, v;
	while(!S.empty()) {
		u = S.back(); S.pop_back();
		rep(i, 0, len(G[u])) {
			v = G[u][i];
			if(color[v] == NIL) {
				color[v] = c;
				S.eb(v);
			}
		}
	}
}
inline void assignColor() {
	int id = 0;
	rep(u, 0, n) {
		if(color[u] == NIL) dfs(u, ++id);
	}
}
int main() {
	int m;
	cin >> n >> m;
	int s, t;
	rep(i, 0, m) {
		cin >> s >> t;
		G[s].eb(t);
		G[t].eb(s);
	}
	assignColor();
	int q; cin >> q;
	rep(i, 0, q) {
		cin >> s >> t;
		P(color[s] == color[t] ? "yes" : "no");
	}
	return 0;
}