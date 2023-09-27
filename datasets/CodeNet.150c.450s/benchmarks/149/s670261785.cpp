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
vi high(10000, 0), par(10000);
inline int findSet(int x) {
	if(x != par[x]) par[x] = findSet(par[x]);
	return par[x];
}
inline void link(int x, int y) {
	if(high[x] > high[y]) par[y] = x;
	else {
		par[x] = y;
		if(high[x] == high[y]) ++high[y];
	}
}
inline void unite(int x, int y) { link(findSet(x), findSet(y)); }
inline bool same(int x, int y) { return findSet(x) == findSet(y); }
int main() {
	int n, q; cin >> n >> q;
	iota(all(par), 0);
	int t, a, b;
	rep(i, 0, q) {
		cin >> t >> a >> b;
		if(t == 0) unite(a, b);
		else if (t == 1) P(same(a, b) ? 1 : 0);
	}
	return 0;
}