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
class RSQ {
public:
	RSQ(int n) {
		_n=1;
		while(_n<n) _n*=2;
		_dat.resize(2*_n-1);
		for(int i=0;i<2*_n-1;++i) _dat[i]=0;
	}
	int size() {
		return _n;
	}
	void update(int k,long long a) {
		k+=_n-1;
		_dat[k]+=a;
		while(k>0) {
			k=(k-1)/2;
			_dat[k]+=a;
		}
	}
	// return the minimum number in [a,b)
	// external call should be written like query(a,b,0,0,_n)
	ll query(int a,int b,int k=0,int l=0,int r=-1) {
		if(r==-1) r=_n;
		if(r<=a||b<=l) return 0;
		if(a<=l&&r<=b) return _dat[k];
		else {
			ll vl=query(a,b,k*2+1,l,(l+r)/2);
			ll vr=query(a,b,k*2+2,(l+r)/2,r);
			return vl+vr;
		}
	}
private:
	int _n;
	vector<ll> _dat;
};
int main() {
	ios::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	RSQ rsq(n);
	REP(i,q) {
		int c,x,y;
		cin>>c>>x>>y;
		if(c==0) {
			--x;
			rsq.update(x,y);
		}
		if(c==1) {
			--x;
			--y;
			cout<<rsq.query(x,y+1)<<endl;
		}
	}
}