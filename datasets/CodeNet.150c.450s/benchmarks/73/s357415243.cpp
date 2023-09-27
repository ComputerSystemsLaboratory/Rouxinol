#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=(a);i<(b);i++)
#define RREP(i,a,b) for(int i=(a);i>=(b);i--)
#define pq priority_queue
#define P pair<int,int>
#define P2 pair<int,P>
#define P3 pair<int,P2>
typedef long long ll; typedef long double ld;
using namespace std;
const int INF=1e9, MOD=1e9+7, around[]={0,1,1,-1,-1,0,-1,1,0,0};
const ll LINF=1e18;
const ld PI=abs(acos(-1));
int n,q;

struct SegmentTree{
	vector<int> data;
	int sz;
	
	SegmentTree(int n){
		sz = 1;
		while(sz<n) sz *= 2;
		data.assign(2*sz, 0);
	}
	
	void update(int k,int x){
		k += sz-1;
		data[k] += x;
		while(k){
			k = (k-1)/2;
			data[k] = data[2*k+1] + data[2*k+2];
		}
	}
	
	int get(int a,int b){
		return _get(a, b, 0, 0, sz);
	}
	
	int _get(int a,int b,int k,int l,int r){
		if(b<=l||r<=a) return 0;
		if(a<=l&&r<=b) return data[k];
		
		return _get(a, b, 2*k+1, l, (l+r)/2) + _get(a, b, 2*k+2, (l+r)/2, r);
	}
};

int main(){
	cin >> n >> q;
	
	SegmentTree seg(n);
	REP(i,0,q){
		int a,b,c;
		cin >> a >> b >> c;
		if(a == 0) seg.update(b-1,c);
		else if(a == 1) cout << seg.get(b-1, c) << endl;
	}
	return 0;
}

