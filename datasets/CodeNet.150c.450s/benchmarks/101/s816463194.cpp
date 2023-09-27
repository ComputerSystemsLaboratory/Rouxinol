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
vi G;
inline int root(int x){ return G[x] < 0 ? x : G[x] = root(G[x]); }
inline void uniteSet(int x, int y){
    x = root(x);
    y = root(y);
    if (x == y) return;
    if (G[x] > G[y]) swap(x, y);
    G[y] = x;
}
inline bool findSet(int x, int y){ return root(x) == root(y); }
int main() {
	int n, m; cin >> n >> m;
	G.resize(n, -1);
	int s, t;
	rep(i, 0, m) {
		cin >> s >> t;
		uniteSet(s, t);
	}
	int q; cin >> q;
	rep(i, 0, q) {
		cin >> s >> t;
		P(findSet(s, t) ? "yes" : "no");
	}
	return 0;
}