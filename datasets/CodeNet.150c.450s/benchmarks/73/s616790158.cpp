#include "bits/stdc++.h"
#include <sys/timeb.h>
#include <fstream>

using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define replrev(i,a,b) for(int i=(int)(b)-1;i>=(int)(a);i--)
#define reprev(i,n) replrev(i,0,n)
#define repi(itr,ds) for(auto itr=ds.begin();itr!=ds.end();itr++)
#define all(a) a.begin(),a.end()
#define mp make_pair
#define mt make_tuple
#define INF 2000000000
#define INFL 1000000000000000000LL
#define EPS (1e-10)
#define MOD 1000000007
#define PI 3.1415926536
#define RMAX 4294967295

typedef long long ll;
typedef pair<int, double> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<P> vP;
typedef vector<vector<int> > vvi;
typedef vector<vector<bool> > vvb;
typedef vector<vector<ll> > vvll;
typedef vector<vector<char> > vvc;
typedef vector<vector<string> > vvs;
typedef vector<vector<double> > vvd;
typedef vector<vector<P> > vvP;
typedef priority_queue<int, vector<int>, greater<int> > pqli;
typedef priority_queue<ll, vector<ll>, greater<ll> > pqlll;
typedef priority_queue<P, vector<P>, greater<P> > pqlP;
typedef pair<int, pair<int, int> > Edge;
typedef vector<Edge> vE;
typedef priority_queue<Edge, vector<Edge>, greater<Edge> > pqlE;


class SegTree {
public:
	int n, height;
	vector<ll> dat;
	
	ll def = 0;
	ll operation(int a, int b) {
		return a + b;
	}

	// ????????????_n????????????????´???°???
	SegTree(int _n) {
		n = 1;
		height = 1;
		while (n < _n) {
			n *= 2;
			height++;
		}
		dat = vector<ll>(2 * n - 1, def);
	}

	// ??´???i(0-indexed)???x????¶????
	void add(int i, ll x) {
		i += n - 1;
		dat[i] += x;
		while (i > 0) {
			i = (i - 1) / 2;
			dat[i] += x;
		}
	}

	// ??´???i(0-indexed)?????????x?????´??°
	void change(int i, ll x) {
		i += n - 1;
		dat[i] = x;
		while (i > 0) {
			i = (i - 1) / 2;
			dat[i] = operation(dat[i * 2 + 1], dat[i * 2 + 2]);
		}
	}

	// ??????[a,b)?????????????????????k=[l,r)????????????????????????
	ll _query(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l)return def;	// ???????????????
		if (a <= l && r <= b)return dat[k];	// a,l,r,b????????§?????¨???????????????
		else {
			ll c1 = _query(a, b, 2 * k + 1, l, (l + r) / 2);	// ?????????
			ll c2 = _query(a, b, 2 * k + 2, (l + r) / 2, r);	// ?????????
			return operation(c1, c2);
		}
	}

	// ?????¨?????¨???_query()???????????????
	ll query(int a, int b) {
		return _query(a, b, 0, 0, n);
	}
};

int main() {
	int N, Q;
	cin >> N >> Q;
	SegTree seg(N);
	rep(i, Q) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			cout << seg.query(b - 1, c) << endl;
		}
		else {
			seg.add(b - 1, c);
		}
	}

	return 0;
}