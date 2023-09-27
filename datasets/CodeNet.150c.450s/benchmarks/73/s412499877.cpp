#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
int n,dat[400001];
void init(int n_){
	n=1;
	while(n<n_)n*=2;
}
void update(int k,int a){
	k+=n-1;
	dat[k]+=a;
	while(k>0){
		k=(k-1)/2;
		dat[k]=dat[k*2+1]+dat[k*2+2];
	}
}
int query(int a,int b,int k,int l,int r){
	if(r<=a||b<=l)return 0;
	if(a<=l&&b>=r)return dat[k];
	int vl=query(a,b,k*2+1,l,(l+r)/2);
	int vr=query(a,b,k*2+2,(l+r)/2,r);
	return vl+vr;
}
int q;
signed main(){
	cin>>n>>q;
	init(n); 
	while(q--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a)cout<<query(b-1,c,0,0,n)<<endl;
		else update(b-1,c);
	}
	return 0;
}


