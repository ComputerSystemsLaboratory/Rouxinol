#include<bits/stdc++.h>
using namespace std;
int n,G[1001][1001],dis[1001],vis[1001],inf=10e8;
void dij(int u){
	for(int i=0;i<n;i++){
	 dis[i]=G[u][i];
	}
	int k;
	vis[u]=1;dis[u]=0;
	for(int i=0;i<n-1;i++){
		int min=inf ;
		for(int j=0;j<n;j++){
			if(vis[j]==0&&dis[j]<min){
				min=dis[j];
				k=j;
			}
		}
		vis[k]=1;
		for(int j=0;j<n;j++){
			if(!vis[j]&&dis[j]>dis[k]+G[k][j])
			dis[j]=dis[k]+G[k][j];
		}
	}
}
int main(){
	scanf("%d",&n);
	int c,v1,v2,k;
	for(int i=0;i<n;i++){
		scanf("%d%d",&v1,&k);
		for(int j=0;j<k;j++){
			scanf("%d%d",&v2,&c);
			G[v1][v2]=c;
		}
	}
	
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
		  if(G[i][j]==0&&i!=j){
		  	G[i][j]=inf;
		  }
	}
	
	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",G[i][j]);
//		}printf("\n"); 
//	}
	dij(0);
	for(int i=0;i<n;i++)
	printf("%d %d\n",i,dis[i]);
}
