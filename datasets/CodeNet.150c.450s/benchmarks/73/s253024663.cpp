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

struct BinaryIndexedTree{
	vector<int> data;
	
	BinaryIndexedTree(int sz){
		data.assign(++sz, 0);
	}
	
	void add(int k,int x){
		for(k++;k<=data.size();k+=k&-k) data[k] += x;
	}
	
	int get(int k){
		int ret = 0;
		for(k++;k>0;k-=k&-k) ret += data[k];
		return ret;
	}
	
	int size(){
		return data.size();
	}
};

int main(){
	cin >> n >> q;
	
	BinaryIndexedTree bit(n);
	REP(i,0,q){
		int a,b,c;
		cin >> a >> b >> c;
		if(a == 0) bit.add(b-1,c);
		else if(a == 1) cout << bit.get(c-1) - bit.get(b-2) << endl;
	}
	return 0;
}

