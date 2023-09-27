#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<string>
#define INF 1000000000ll
#define MOD 1000000007ll
#define EPS 1e-8
#define REP(i,m) for(long long i=0; i<m; ++i)
#define FOR(i,n,m) for(long long i=n; i<m; ++i)
#define DUMP(n,a) for(long long i=0; i<n; ++i) { cout<<a[i]; if(i!=n-1) cout<<" "; else cout<<endl; }
#define ALL(v) v.begin(),v.end()
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<long long> vl;
typedef vector<vector<long long> > vll;
typedef vector<P> vp;
typedef vector<vector<P> > vpp;
class union_find {
public:
	union_find(int n)
	: par_(n, -1)
	{}
	void init(int n) {
		par_.assign(n, -1);
	}

	int root(int x) {
		return par_[x] < 0 ? x : par_[x] = root(par_[x]);
	}

	bool unite(int x, int y) {
		x = root(x); y = root(y);
		if(x == y) {
			return false;
		} else {
			if(par_[x] < par_[y]) {
				par_[x] += par_[y];
				par_[y] = x;
			} else {
				par_[y] += par_[x];
				par_[x] = y;
			}
			return true;
		}
	}

	bool same(int x, int y) {
		return root(x) == root(y);
	}

	int size(int x) {
		return -par_[root(x)];
	}

private:
	std::vector<int> par_;
};
int main() {
	ios::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	union_find uf(n);
	REP(i,q) {
		int c,x,y;
		cin>>c>>x>>y;
		switch(c) {
			case 0: {
				uf.unite(x,y);
				break;
			}
			case 1: {
				cout<<(int)uf.same(x,y)<<endl;
				break;
			}
		}
	}
}