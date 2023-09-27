#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int par[100000],high[100000];
int find(int x){
	if(x==par[x])return x;
	return par[x]=find(par[x]);
}
void unite(int x,int y){
	x=find(x);y=find(y);
	if(x==y)return;
	if(high[x]>high[y]){
		par[y]=x;
	}
	else{
		par[x]=y;
		if(high[x]==high[y]){
			high[y]++;
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	rep(i,n){
		par[i]=i;
	}
	rep(i,m){
		int s,t;cin>>s>>t;
		unite(s,t);
	}
	int q;cin>>q;
	rep(i,q){
		int s,t;cin>>s>>t;
		puts(find(s)==find(t)?"yes":"no");
	}
}