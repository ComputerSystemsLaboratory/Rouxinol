#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <queue>

#define INF 214748364

using namespace std;

struct edge { int from,to,cost;};

int main(){
	int V,E,r,
	    s,t,d,
	    score[1000];
	vector<edge> G;
	bool nl=true;
	
	scanf("%d %d %d",&V,&E,&r);
	for(int i=0;i<E;i++){
		scanf("%d %d %d",&s,&t,&d);
		G.push_back( {s,t,d} );
	}
	
	fill(score , score + V , INF);
	score[r] = 0;
	
	for(int i=0;i<V;i++){
		for(int j=0;j<E;j++){
			edge e = G[j];
			if(score[e.from] != INF && score[e.to] > score[e.from]+e.cost){
				score[e.to] = score[e.from]+e.cost;
				if(i == V-1) nl=false;
			}
		}
	}
	
	if(nl){
		for(int i=0;i<V;i++){
			if(score[i]==214748364) printf("INF\n");
			else printf("%d\n",score[i]);
		}
	}
	else printf("NEGATIVE CYCLE\n");
		
	return 0;
}
