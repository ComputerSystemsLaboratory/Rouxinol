#include <stdio.h>
#define INF 10000000
typedef struct{
	int node;
	int cost;
} List;

int dist[101];
List list[101][101];
int kazu[101];

int n;

void walk(int x,int step){
	dist[x]=step;
	for(int i=0;i<kazu[x];i++){
		if(dist[list[x][i].node]>step+list[x][i].cost) walk(list[x][i].node,step+list[x][i].cost);
	}
}

int main(void){
	int i,j,w;
	int num;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		scanf("%d",kazu+num);
		for(j=0;j<kazu[num];j++)scanf("%d %d",&(list[num][j].node),&list[num][j].cost);
	}
	for(i=0;i<n;i++) dist[i]=INF;
	walk(0,0);
	
	for(i=0;i<n;i++){
		printf("%d %d\n",i,dist[i]);
	}
	return 0;
}