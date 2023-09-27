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

int sz;
int seg[400010]={};
int get_size(int n);
int unit();
int func(int a,int b);
int build(int n);
int update(int k,int x); //0-indexed
int _get(int a,int b,int k,int l,int r);
int get(int a,int b); //[a,b)

int main(){
	cin >> n >> q; build(n);
	REP(i,0,q){
		cin >> a >> b >> c;
		if(a) cout << get(b,c+1) << endl;
		else update(b,c);
	}
	
	return 0;
}

int get_size(int n){
	int res=0;
	while(n) n=n>>1,res++;

	return (1<<res);
}

int unit(){
	return 0;
}

int func(int a,int b){
	return a+b;
}

int build(int n){
	sz=get_size(n);
	REP(i,0,2*sz) seg[i]=unit();
	return 0;
}

int update(int k,int x){
	k+=sz-1;
	seg[k]+=x;
	while(k){
		k=(k-1)>>1;
		seg[k]=func(seg[k*2+1],seg[k*2+2]);
	}

	return 0;
}

int _get(int a,int b,int k,int l,int r){
	if(b<=l||r<=a) return unit();
	if(a<=l&&r<=b) return seg[k];

	return func(_get(a,b,2*k+1,l,(l+r)>>1), _get(a,b,2*k+2,(l+r)>>1,r));
}

int get(int a,int b){
	return _get(a,b,0,0,sz);
}