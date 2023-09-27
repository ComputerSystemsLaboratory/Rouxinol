#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct edge{int from,to,cost;};
bool comp(const edge& e1,const edge& e2){
	return e1.cost<e2.cost;
}
int V,E;
edge G[100000];
//Union-Find
int par[10000];
int Rank[10000];
void init()
{
	for(int i=0;i<V;i++){
		par[i]=i;
		Rank[i]=0;
	}
}
int find(int x)
{
	if(x==par[x])return x;
	return par[x]=find(par[x]);
}
void unite(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y)return ;

	if(Rank[x]<Rank[y]){
		par[x]=y;
	}
	else{
		par[y]=x;

	}
	if(Rank[x]==Rank[y])Rank[x]++;
}
bool same(int x,int y){
	return find(x)==find(y);
}
int kkk()
{
	int ans=0;
	for(int i=0;i<E;i++){
		//printf("%d\n",same(G[i].from,G[i].to));
		//printf("%d %d\n",G[i].from,G[i].to);
		if(!same(G[i].from,G[i].to)){
			unite(G[i].from,G[i].to);
			ans+=G[i].cost;
		}
	}
	return ans;
}
int main()
{
	scanf("%d%d",&V,&E);
	for(int i=0;i<E;i++){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		edge e1={a,b,c};
		G[i]=e1;
	}
	sort(G,G+E,comp);
	init();
	printf("%d\n",kkk());
	return 0;
}