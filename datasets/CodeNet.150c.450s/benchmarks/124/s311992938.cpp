#include<iostream>
#include<cstdio>
#include<algorithm>

#define MAX 100
static const int INFTY =(1<<21);

int n,M[MAX][MAX];
int unvisited=0,decide=1,comp_decide=2;

void dijkstra(){
	int d[MAX];
	int state[MAX];
	for(int i=0;i<n;i++){
		d[i]=INFTY;
		state[i]=unvisited;
	}
	d[0]=0;
	state[0]=0;
	while(1){
		int mincost=INFTY,u=-1;
		for(int i=0;i<n;i++){
			if(d[i]<mincost&&state[i]!=comp_decide){
				u=i;
				mincost=d[i];
			}
		}
		if(u==-1) break;
		state[u]=comp_decide;
		for(int v=0;v<n;v++){
			if(state[v]!=comp_decide&&M[u][v]!=INFTY){
				if(d[v]>d[u]+M[u][v]){
					d[v]=d[u]+M[u][v];
					state[v]=decide;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
			printf("%d %d\n",i,(d[i]==INFTY ? -1:d[i]));
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			M[i][j]=INFTY;
		}
	}
	int u,k,v,c;
	for(int i=0;i<n;i++){
		scanf("%d %d",&u,&k);
		for(int j=0;j<k;j++){
			scanf("%d %d",&v,&c);
			M[u][v]=c;
		}
	}
	dijkstra();
}