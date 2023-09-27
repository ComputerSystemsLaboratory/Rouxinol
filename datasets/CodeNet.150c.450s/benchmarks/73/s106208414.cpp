#include <bits/stdc++.h>
//#include <math.h>
using namespace std;

#define INF 1.1e9
#define LINF 1.1e18
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define BIT(x,n) bitset<n>(x)
#define PI 3.14159265358979323846

typedef long long ll;
//typedef pair<int,int> P;
//typedef pair<int,P> PP;

//-----------------------------------------------------------------------------

template< typename T >
struct SegmentTree {
	typedef function< T(T,T) > F;

	int sz;
	vector<T> node;

	const F f;
	const T INIT;

	SegmentTree(int n,const F f,const T &INIT):f(f),INIT(INIT) {
		sz=1;
		while(sz<n) sz<<=1;
		node.assign(2*sz-1,INIT);
	}

	void set(int k,const T &x) {
		node[k+sz-1]=x;
	}

	void build() {
		for(int k=sz-2;k>=0;k--) {
			node[k]=f(node[2*k+1],node[2*k+2]);
		}
	}

	void update(int k,const T &x) {
		k+=sz-1;
		node[k]+=x;
		while(k>0) {
			k=(k-1)/2;
			node[k]=f(node[k*2+1],node[k*2+2]);
		}
	}

	T query(int a,int b,int k,int l,int r) {
		if(r<=a||b<=l) return 0;
		if(a<=l&&r<=b) return node[k];
		T vl=query(a,b,k*2+1,l,(l+r)/2);
		T vr=query(a,b,k*2+2,(l+r)/2,r);
		return f(vl,vr);
	}

	T query(int a,int b) {
		return query(a,b,0,0,sz);
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n,q;cin>>n>>q;
	SegmentTree<int> tree(n,[](int a,int b){return a+b;},0);
	while(q--) {
		int type,x,y;cin>>type>>x>>y;
		if(type==0) {
			x--;
			tree.update(x,y);
		}
		else {
			x--;
			cout<<tree.query(x,y)<<endl;
		}
	}

	return 0;
}

