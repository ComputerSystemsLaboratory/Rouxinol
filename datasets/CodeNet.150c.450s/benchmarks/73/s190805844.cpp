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
typedef pair<int,ll> P;
typedef pair<ll,P> PP;

//-----------------------------------------------------------------------------

template< typename T >
struct BinaryIndexedTree {
	vector<T> data;

	BinaryIndexedTree(int size):data(size+1,0) {}

	T sum(int k) {
		T res=0;
		for(++k;k>0;k-=(k&-k)) res+=data[k];
		return res;
	}

	void add(int k,T x) {
		for(++k;k<(int)data.size();k+=(k&-k)) data[k]+=x;
	}
};

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n,q;
	cin>>n>>q;
	BinaryIndexedTree<long long> tree(n+1);
	while(q--) {
		int type,x,y;
		cin>>type>>x>>y;
		if(type==0) {
			tree.add(x,y);
		}
		else {
			cout<<tree.sum(y)-tree.sum(x-1)<<endl;
		}
	}

	return 0;
}

