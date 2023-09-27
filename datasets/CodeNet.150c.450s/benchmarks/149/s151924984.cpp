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
class DisjointSet {
	public:
	vector<int> rank, p;
	DisjointSet() {}
	DisjointSet(int size) {
		rank.resize(size, 0);
		p.resize(size, 0);
		rep(i, 0, size) makeSet(i);
	}
	void makeSet(int x) {
		p[x] = x;
		rank[x] = 0;
	}
	bool same(int x, int y) {
		return findSet(x) == findSet(y);
	}
	void unite(int x, int y) {
		link(findSet(x), findSet(y));
	}
	void link(int x, int y) {
		if(rank[x] > rank[y]) p[y] = x;
		else {
			p[x] = y;
			if(rank[x] == rank[y]) ++rank[y];
		}
	}
	int findSet(int x) {
		if(x != p[x]) p[x] = findSet(p[x]);
		return p[x];
	}
};
int main() {
	int n, q; cin >> n >> q;
	DisjointSet ds = DisjointSet(n);
	int t, a, b;
	rep(i, 0, q) {
		cin >> t >> a >> b;
		if(t == 0) ds.unite(a, b);
		else if (t == 1) P(ds.same(a, b) ? 1 : 0);
	}
	return 0;
}