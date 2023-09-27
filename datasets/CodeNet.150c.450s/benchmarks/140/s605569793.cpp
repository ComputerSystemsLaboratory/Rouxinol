#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define INF 1000000000000000
#define fi first
#define se second
#define all(v) v.begin(),v.end()
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
#define pb push_back
//struct edge{int to,cost;};
struct edge{int u,v,cost;};
typedef pair<int,int> P;
bool comp(const edge& e1,const edge&e2){
	return e1.cost<e2.cost;
}
int n,m;
edge es[222222];
int par[11111],ran[11111];
void init(int n){
	rep(i,n){
		par[i]=i;
		ran[i]=0;
	}
}
int find(int x){
	if(par[x]==x)return x;
	return par[x]=find(par[x]);
}
void unite(int x,int y){
	x=find(x),y=find(y);
	if(x==y)return;
	if(ran[x]<ran[y])par[x]=y;
	else{
		par[y]=x;
		if(ran[x]==ran[y])ran[x]++;
	}
}
bool same(int x,int y){
	return find(x)==find(y);
}
int kruskal(){
	sort(es,es+m,comp);
	init(n);
	int ans=0;
	for(edge e:es){
		if(!same(e.u,e.v)){
			unite(e.u,e.v);
			ans+=e.cost;
		}
	}
	return ans;
}
signed main(){
	cin>>n>>m;
	rep(i,m)cin>>es[i].u>>es[i].v>>es[i].cost;
	cout<<kruskal()<<endl;
	return 0;
}

