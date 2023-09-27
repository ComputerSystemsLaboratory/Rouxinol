#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
const int MAX=105;
const int INF= 1<<30;
int M[MAX][MAX],n,d[MAX],p[MAX],vis[MAX];
void init(){
	for(int i=0;i<n;i++){
		d[i]=INF;
		p[i]=-1;
		vis[i]=0;
	}
	d[0]=0;
}
void dijkstra(){
	init();
	while (true){
		int u=-1;
		int minCost=INF;
		for(int i=0;i<n;i++){
			if(!vis[i] && d[i]<minCost){
				u=i;
				minCost=d[i];
			}
		}
		if(u==-1)break;
		vis[u]=1;
		for(int i=0;i<n;i++){
			if(!vis[i] && M[u][i]!=-1 &&M[u][i]+d[u]<d[i]){
				d[i]=M[u][i]+d[u];
				p[i]=u;
			}
		}
	}
}
int main(){
	cin>>n;
	memset(M,-1,sizeof(M));
	for(int i=0;i<n;i++){
		int u,k,v,c;
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>v>>c;
			M[u][v]=c;
		}
	}
	dijkstra();
	for(int i=0;i<n;i++){
		printf("%d %d\n",i,d[i]);
	}
	return 0;
} 
