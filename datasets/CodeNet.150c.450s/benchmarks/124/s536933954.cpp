//By Vlgd
#include<bits/stdc++.h>
using namespace std;
const int INF=(1<<21);
const int N=100;
int G[N][N],n,vis[N]={0},dis[N];
void dij(int s){
	dis[s]=0;
	while(1){
		int min=INF,u=-1;
		for(int i=0;i<n;i++){
			if(!vis[i]&&min>dis[i]){
				min=dis[i];
				u=i;
			} 
		}
		if(u==-1) break;
		vis[u]=1;
		for(int v=0;v<n;v++)
			if(G[u][v]!=INF&&!vis[v])
				if(dis[v]>dis[u]+G[u][v]) 
					dis[v]=dis[u]+G[u][v];
	}
}
int main(){
	scanf("%d",&n);
	int u,v,deg,w;
	for (int i=0;i<n;i++){
		dis[i]=INF;
		for (int j=0;j<n;j++) G[i][j]=INF;
	}
	for (int i=0;i<n;i++){
		scanf("%d%d",&u,&deg);
		for (int j=0;j<deg;j++){scanf("%d%d",&v,&w);G[u][v]=w;}
	}
	dij(0);
	for (int i=0;i<n;i++) printf("%d %d\n",i,dis[i]);
	return 0;
}
