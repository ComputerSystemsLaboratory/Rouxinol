#include <stdio.h>

#define N 2000
#define BLACK 0
#define WHITE 1
#define GRAY 2
#define inf 200000

int Map[N][N];
int n;
int color[N];
int d[N];
int p[N];


void init(){
	int i;
	for(i=0;i<n;i++){
		color[i]=WHITE;
		d[i] = inf;
	}
}

void prim(){
	init();
	int mincost;
	d[0] = 0;
	p[0] = -1;
	int i;
	int u;
	int v;
	while(1){
		mincost = inf;
		for(i=0;i<n;i++){
			if(color[i]!=BLACK && d[i] < mincost){
				mincost = d[i];
				u = i;
			}
		}

		if(mincost == inf){
			break;
		}
		color[u]=BLACK;
		for(v=0;v<n;v++){
			if(color[v] != BLACK && Map[u][v]!= -1){
				if(Map[u][v] < d[v]){
					d[v] = Map[u][v];
					color[v] = GRAY;
					p[v] = u;
				}
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&Map[i][j]);
		}
	}
	prim();
	int total = 0;
	for(i=0;i<n;i++){
		total += d[i];
	}
	printf("%d\n",total);
	return 0;
}