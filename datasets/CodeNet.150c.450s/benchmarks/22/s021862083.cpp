#include<bits/stdc++.h>
using namespace std;
static const int MAX_V = 1000;
static const int MAX_E = 2000;
static const int INF = 1 << 30;

struct edge{int from, to, cost;};

edge es[MAX_E];

int d[MAX_V];
int V, E;
bool def = true;

void shortest_path(int s){
	for(int i = 0; i < V; i++) d[i] = INF;
	d[s] = 0;
	int cnt = 0;
	while(true){
		cnt++;
		bool update = false;
		for(int i = 0; i < E; i++){
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if(!update) break;
		if(cnt == V){
			def = false;
			return;
		}
	}
}

int main(){
	int r;
	scanf("%d %d %d", &V, &E, &r);
	for(int i = 0; i < E; i++){
		scanf("%d %d %d", &es[i].from, &es[i].to, &es[i].cost);
	}
	shortest_path(r);
	if(!def) printf("NEGATIVE CYCLE\n");
	else{
		for(int i = 0; i < V; i++){
			if(d[i] == INF) printf("INF\n");
			else printf("%d\n", d[i]);
		}
	}
	return 0;
}