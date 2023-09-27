#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>
#include <map>
#include <set>

#define INF_LL 9000000000000000000
#define INF 2000000000

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;

class SegTree{
	int n;
	vector<ll> seg;
public:
	SegTree(int n_){
		n = 1;
		while(n < n_) n *= 2;

		REP(i, n*2-1){
			seg.push_back(0);
		}
	}

	void add(int i, int x){
		i += n-1;
		seg[i] += x;
		while(i > 0){
			i = (i-1)/2;
			seg[i] = seg[i*2+1] + seg[i*2+2];
		}
	}

	int getSum(int s, int t){
		return getSum_solve(s, t, 0, 0, n);
	}
	
	int getSum_solve(int s, int t, int x, int l, int r){
		if(t <= l || r <= s) return 0;
		if(s <= l && r <= t) return seg[x];
		int res = 0;

		res += getSum_solve(s, t, x*2+1, l, (l+r)/2);
		res += getSum_solve(s, t, x*2+2, (l+r)/2, r);

		return res;
	}
};

class BIT{
	int n;
	vector<int> dat;
public:
	BIT(int _n){
		n = 1;
		while(n < _n) n = n << 1;
		REP(i, n){
			dat.push_back(0);
		}
	}

	int sum(int i){
		int s = 0;
		while(i){
			s += dat[i];
			i -= i & -i;
		}
		return s;
	}

	void add(int i, int x){
		while(i <= n){
			dat[i] += x;
			i += i & -i;
		}
	}
};

int main(void){
	int n, q;
	cin >> n >> q;
	BIT sg(n);
	REP(i, q){
		int com, x, y;
		cin >> com >> x >> y;
		if(com == 0){
			sg.add(x, y);
		}else{
			cout << sg.sum(y)-sg.sum(x-1) << endl;
		}
	}
}