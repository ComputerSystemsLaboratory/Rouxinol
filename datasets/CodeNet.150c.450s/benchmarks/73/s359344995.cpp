#include <bits/stdc++.h>

#define _overload(_1,_2,_3,name,...) name
#define _rep(i,n) _range(i,0,n)
#define _range(i,a,b) for(int i=int(a);i<int(b);++i)
#define rep(...) _overload(__VA_ARGS__,_range,_rep,)(__VA_ARGS__)

#define _rrep(i,n) _rrange(i,n,0)
#define _rrange(i,a,b) for(int i=int(a)-1;i>=int(b);--i)
#define rrep(...) _overload(__VA_ARGS__,_rrange,_rrep,)(__VA_ARGS__)

#define _all(arg) begin(arg),end(arg)
#define uniq(arg) sort(_all(arg)),(arg).erase(unique(_all(arg)),end(arg))
#define getidx(ary,key) lower_bound(_all(ary),key)-begin(ary)
#define clr(a,b) memset((a),(b),sizeof(a))
#define bit(n) (1LL<<(n))
#define popcount(n) (__builtin_popcountll(n))

using namespace std;

template<class T>bool chmax(T &a, const T &b) { return (a<b)?(a=b,1):0;}
template<class T>bool chmin(T &a, const T &b) { return (b<a)?(a=b,1):0;}

using ll=long long;
using R=long double;
const R EPS=1e-9; // [-1000,1000]->EPS=1e-8 [-10000,10000]->EPS=1e-7
inline int sgn(const R& r){return(r > EPS)-(r < -EPS);}
inline R sq(R x){return sqrt(max<R>(x,0.0));}

const int dx[8]={1,0,-1,0,1,-1,-1,1};
const int dy[8]={0,1,0,-1,1,1,-1,-1};

// Problem Specific Parameter:

struct Segment_tree{
	using T=ll;

	int n;
	vector<T> data;
	const T out=0LL;

	inline T vmerge(T l,T r){return l+r;}

	Segment_tree(int n):n(n){data.assign(2*n,out);}

	void update(int p,T x) {  // set value at position p
		for(data[p+=n]+=x; p > 1; p >>= 1){
			data[p>>1]=vmerge(data[p],data[p^1]);
		}
	}

	T query(int l, int r) {  // sum on interval [l, r)
		T resl = out,resr = out;
			for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
				if (l&1) resl = vmerge(data[l++], resl);
				if (r&1) resr = vmerge(resr, data[--r]);
		}
		return vmerge(resl,resr);
	}
};

int main(void){
	int n,q;
	cin >> n >> q;

	Segment_tree rsq(n);

	rep(loop,q){
		int com,x,y;
		cin >> com >> x >> y;
		if(com)
			cout << rsq.query(x,y+1) << endl;
		else
			rsq.update(x,y);
	}
	return 0;
}