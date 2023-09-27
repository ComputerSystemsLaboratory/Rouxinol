#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;
typedef pair<int,int> pii;

template <typename T>
class RMQ {
private:
	vector<T> _dat;
	int _n;
	T _initial;

public:
	RMQ(int n, T initial) {
		init(n, initial);
	}

	void init(int n, T initial) {
		_initial = initial;
		_n = 1;
		while(_n < n) _n *= 2;
		_dat.resize(_n*2-1, _initial);
	}

	void update(int x, T y) {
		x += _n-1;
		_dat[x] += y;
		while(x > 0) {
			x = (x-1) / 2;
			_dat[x] += y;
		}
	}

	T query(int a, int b) {
		return query(a, b, 0, 0, _n);
	}

	T query(int a, int b, int k, int l, int r) {
		if(b<=l || r<=a) return _initial;
		if(a<=l && r<=b) return _dat[k];
		return query(a,b,k*2+1,l,(l+r)/2) + query(a,b,k*2+2,(l+r)/2,r);
	}
};

int main() {
	int n, q;
	cin >> n >> q;
	RMQ<int> rmq(n, 0);
	rep(i, q) {
		int c, x, y;
		cin >> c >> x >> y;
		if(c) {
			x--; y--;
			cout << rmq.query(x, y+1) << endl;
		} else {
			x--;
			rmq.update(x, y);
		}
	}
	return 0;
}