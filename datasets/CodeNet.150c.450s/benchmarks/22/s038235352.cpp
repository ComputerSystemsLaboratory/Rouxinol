#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
#include <string.h>
typedef long long int ll;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000001
using namespace std;

struct Info{
	void set(int arg_from,int arg_to,int arg_cost){
		from = arg_from;
		to = arg_to;
		cost = arg_cost;
	}
	int from,to,cost;
};

int main(){

	int V,E,start;
	scanf("%d %d %d",&V,&E,&start);

	int* min_dist = new int[V];

	for(int i = 0; i < V; i++)min_dist[i] = BIG_NUM;
	min_dist[start] = 0;

	Info* Edges = (Info*)malloc(sizeof(Info)*E);

	int from,to,cost;

	for(int i = 0; i < E; i++){
		scanf("%d %d %d",&from,&to,&cost);
		Edges[i].set(from,to,cost);
	}

	bool FLG = true,updated;
	Info tmp;

	for(int i = 0; i < V; i++){
		updated = false;
		for(int k = 0; k < E; k++){
			tmp = Edges[k];
			if(min_dist[tmp.from] != BIG_NUM && min_dist[tmp.to] > min_dist[tmp.from] + tmp.cost){
				min_dist[tmp.to] = min_dist[tmp.from] + tmp.cost;

				updated = true;
				if(i == V-1){
					FLG = false;
					break;
				}
			}
		}
		if(!updated)break;
		if(!FLG)break;
	}

	if(!FLG){
		printf("NEGATIVE CYCLE\n");
		return 0;
	}

	for(int i = 0; i < V; i++){
		if(min_dist[i] == BIG_NUM){
			printf("INF\n");
		}else{
			printf("%d\n",min_dist[i]);
		}
	}

	return 0;
}