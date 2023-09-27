#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

// const int MAX_N = 1000000;
const int INFTY = (1 << 21); // 2097152
// const ll INFTY = (1LL << 60);
const ll MD = 1000000007LL;
// fprintf(stderr, "%d %lld \n", x, xll);

// segtree
const int MAX_N = 200000; // 1 << 20; // > 10^6

class SegTree{

public:

	int n;
	vector<ll> dat;
	ll dummy = 0; // (1 << 31) - 1;

	SegTree(int _n){
		init(_n);
	}

	void init(int n_){
        dat = vector<ll>(2 * MAX_N - 1);
		n = 1;
		while(n < n_) n *=2;

		// initialize
		rep(i, 2 * n - 1) dat[i] = dummy;
	}

	void update(int k, ll a){
		// update from bottom
		k += n-1;
		dat[k] += a;
		while(k > 0){
			k = (k - 1) / 2;
			dat[k] = dat[k*2+1] + dat[k*2+2];
		}
	}

	// sum of [a, b)
	ll query(int a, int b){
		return _query(a, b, 0, 0, n);
	}

	// sum of [a, b)
	// node k, corresponding [l, r)
	ll _query(int a, int b, int k, int l, int r){
		if(r <= a || b <= l) return dummy;
		if(a <= l && r <= b) return dat[k];
		else{
			int vl = _query(a, b, k*2+1, l, (l+r)/2);
			int vr = _query(a, b, k*2+2, (l+r)/2, r);
			return vl + vr;
		}
	}
};


int N, Q;
int main() {
	cin >> N >> Q;

	SegTree ST(N);

	rep(q, Q){
		int c, x, y;
		cin >> c >> x >> y;

		if(c == 0){
			// update
            x--;
			ST.update(x, y);
		}
		else{
			// find
            x--; y--;
			cout << ST.query(x, y+1) << endl;
		}
	}

    // rep(i, ST.n * 2 - 1){fprintf(stderr, "%d ", ST.dat[i]); } fprintf(stderr, "\n");
}