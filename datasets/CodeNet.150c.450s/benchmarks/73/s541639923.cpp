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

class SegTree{

public:

	int n;
	vector<int> dat;
	vector<int> _kl;
	vector<int> _kr;

	int dummy = 2147483647;

	SegTree(int _n){
		init(_n);
	}

	void init(int n_){
		// set n
		n = 1;
		while(n < n_) n *=2;
		int n_cells = 2 * n - 1;

		// initialize vectors
		dat = vector<int>(n_cells);
		_kl = vector<int>(n_cells);
		_kr = vector<int>(n_cells);

		// initialize kl, kr
		rep(k, n_cells){
			if(is_root(k)){
				_kl[k] = 0;
				_kr[k] = n;
			}
			else{
				if(is_cl(k)) {
					_kl[k] = _kl[pa(k)];
					_kr[k] = (_kl[pa(k)] + _kr[pa(k)]) / 2;
				}
				else{
					_kl[k] = (_kl[pa(k)] + _kr[pa(k)]) / 2;
					_kr[k] = _kr[pa(k)];
				}
			}
		}

		// initialize values
		rep(k, n_cells) dat[k] = 0;

		/*
		rep(k, n_cells){
			fprintf(stderr, "%d %d %d %d\n", k, _kl[k], _kr[k], dat[k]);
		}
		*/
	}

	int pos(int i){ return i + n - 1; }
	int pa(int k){ return (k - 1) / 2; }
	int cl(int k){ return k * 2 + 1; }
	int cr(int k){ return k * 2 + 2; }
	bool is_root(int k){ return k == 0; }
	bool is_cl(int k){
		if(is_root(k)) return false;
		return cl(pa(k)) == k;
	}

	void update(int i, int a){
		int k = pos(i);
		dat[k] += a;
		while(!is_root(k)){
			k = pa(k);
			dat[k] += a;
		}
	}

	int query(int il, int ir){
		return _query(il, ir, 0);
	}

	int _query(int il, int ir, int k){
		int kl = _kl[k];
		int kr = _kr[k];
		if(kr <= il || ir <= kl) return 0;
		if(il <= kl && kr <= ir) return dat[k];
		else{
			int vl = _query(il, ir, cl(k));
			int vr = _query(il, ir, cr(k));
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

}