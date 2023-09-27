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
int n,q,a,b,c;

struct UnionFind{
	vector<int> data;
	
	UnionFind(int sz){
		data.assign(sz, -1);
	}
	
	bool unite(int x,int y){
		x = find(x); y = find(y);
		if(x == y) return false;
		if(data[x] > data[y]) swap(x, y);
		data[x] += data[y];
		data[y] = x;
		return true;
	}
	
	int find(int k){
		if(data[k] < 0) return k;
		return data[k] = find(data[k]);
	}
	
	bool same(int x,int y){
		x = find(x); y = find(y);
		if(x == y) return true;
		else return false;
	}
	
	int size(int k){
		return -data[find(k)];
	}
};

int main(){
	cin >> n >> q;
	UnionFind data(n);
	
	REP(i,0,q){
		cin >> a >> b >> c;
		if(a==0) data.unite(b, c);
		else cout << data.same(b, c) << endl;
	}	
	return 0;
}

