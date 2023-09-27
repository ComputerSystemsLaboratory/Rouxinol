#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-10;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

template<typename T, typename E>
class SegTree{
private:
	using F = function<T(T, T)>;
	using G = function<T(T, E)>;
	int32 n;
	F f;
	G g;
	T ti; // e0:F
	vector<T> node;
public:
	SegTree(int32 _n, F f, G g, T ti):f(f), g(g), ti(ti){
		init(_n);
	}
	SegTree(vector<T> v, F f, G g, T ti):f(f), g(g), ti(ti){
		node = v;
		init(v.size());
		for(int32 i = n-2;i >= 0;i--){
			merge(i);
		}
	}

	inline void init(int32 _n){
		n = 1;
		while(n < _n) n *= 2;
		node.resize(2*n-1, ti);
	}

	inline void merge(int32 k){
		if(node[k*2+1] == ti) node[k] = node[k*2+2];
		else if(node[k*2+2] == ti) node[k] = node[k*2+1];
		else node[k] = f(node[k*2+1], node[k*2+2]);
	}

	void update(int32 k, E x){
		k += n-1;
		node[k] = g(node[k], x);
		while(k){
			k = (k-1)/2;
			merge(k);
		}
	}

	T query(int32 a, int32 b, int32 k=0, int32 l=0, int32 r=-1){
		if(r < 0) r = n;
		if(b <= l || r <= a) return ti;
		if(a <= l && r <= b) return node[k];
		return f(query(a, b, k*2+1, l, (l+r)/2), query(a, b, k*2+2, (l+r)/2, r));
	}
};

template<typename T, typename E>
class LazySegTree{
private:
	using F = function<T(T, T)>;
	using G = function<T(T, E)>;
	using H = function<E(E, E)>;
	using P = function<E(E, int32)>;
	int32 n;
	vector<T> node;
	vector<E> lazy;
	F f;
	G g;
	H h;
	P p;
	T ti;
	E ei;
public:
	LazySegTree(int32 _n, F f, G g, H h, T ti, E ei, P p = [](E a, int32 b){return a;}):f(f), g(g), h(h), p(p), ti(ti), ei(ei){
		init(_n);
	}

	LazySegTree(vector<T> v, F f, G g, H h, T ti, E ei, P p = [](E a, int32 b){return a;}):f(f), g(g), h(h), p(p), ti(ti), ei(ei){
		node = v;
		init(v.size());
	}

	void init(int32 _n){
		n = 1;
		while(n < _n) n*=2;
		node.resize(2*n-1, ti);
		lazy.resize(2*n-1, ei);
	}

	inline void merge(int32 k){
		if(node[k*2+1] == ti) node[k] = node[k*2+2];
		else if(node[k*2+2] == ti) node[k] = node[k*2+1];
		node[k] = f(node[k*2+2], node[k*2+1]);
	}

	inline void eval(int32 k, int32 l, int32 r){
		if(lazy[k] == ei) return;
		node[k] = g(node[k], p(lazy[k], r-l));
		if(r-l > 1){
			lazy[k*2+1] = h(lazy[k*2+1], lazy[k]);
			lazy[k*2+2] = h(lazy[k*2+2], lazy[k]);
		}
		lazy[k] = ei;
	}

	void update(int32 a, int32 b, E x, int32 k=0, int32 l=0, int32 r=-1){
		if(r<0) r = n;
		eval(k, l, r);
		if(b <= l || r <= a) return;
		if(a <= l && r <= b){lazy[k] = h(lazy[k], x);return;}
		node[k] = f(update(a, b, x, k*2+1, l, (l+r)/2), update(a, b, x, l, (l+r)/2));
	}

	T query(int32 a, int32 b, int32 k=0, int32 l=0, int32 r=-1){
		if(r<0) r = n;
		eval(k, l, r);
		if(b <= l || r <= a) return ti;
		if(a <= l && r <= b) return node[k];
		return f(query(a, b, k*2+1, l, (l+r)/2), query(a, b, k*2+2, (l+r)/2, r));
	}
};

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);
	int32 n, q;
	cin >> n >> q;
	SegTree<int64, int64> sg(n
		, [](int64 a, int64 b){return a+b;}
		, [](int64 a, int64 b){return a+b;}
		, 0);
	REP(i, q){
		int64 com, x, y;
		cin >> com >> x >> y;
		if(com == 0) sg.update(x-1, y);
		else cout << sg.query(x-1, y) << endl;
	}
}
