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

// Description: ?´????????????????????????????????§???? 
// TimeComplexity: ?????????$\mathcal{O}(n)$ ??´??°$\mathcal{O}(\log n)$
// Verifyed: AOJ DSL_1_A

class Union_find{
	public:
	    Union_find(int n){par.resize(n),iota(_all(par),0);}
	    int find(int x){return (par[x]==x)?x:par[x]=find(par[x]);}
	    void unite(int a,int b){a=find(a),b=find(b);par[a]=b;}
		bool same(int a,int b){return find(a)==find(b);}
	private:
		vector<int> par;
};

int main(void){
	int n,q;
	cin >> n >> q;
	Union_find uf(n);
	rep(loop,q){
		int type,x,y;
		cin >> type >> x >> y;
		if(type)
			cout << uf.same(x,y) << endl;
		else
			uf.unite(x,y);
	}	
	return 0;
}