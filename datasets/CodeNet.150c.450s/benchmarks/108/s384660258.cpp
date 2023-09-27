#include <stdio.h>
#define INF 10000000 

int k[101]; 
int list[101][101]; 

int dist[101]; 

int n;

void walk(int id,int step){
	dist[id-1]=step;
	for(int i=0;i<k[id];i++){
		if(dist[list[id][i]-1]>step+1) walk(list[id][i],step+1);
	}
}

int main(void){
	int w;
	int num;

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		scanf("%d",k+num);
		for(int j=0;j<k[num];j++) scanf("%d",&list[num][j]);
	}
	for(int i=0;i<n;i++) dist[i]=INF;
	walk(1,0);
	for(int i=1;i<=n;i++){
		if(dist[i-1]!=INF) printf("%d %d\n",i,dist[i-1]);
		else printf("%d -1\n",i);
	}
	return 0;
}