#include<iostream>
using namespace std;
#include<cstdio>
#include<cassert>
#include<utility>
#include<vector>

struct edge{ int from, to, cost; };

edge init(int f, int t, int c){ edge e; e.from = f, e.to = t, e.cost = c; return e; }

int main()
{
	int k, from, to, cost, n, m, r;
	scanf("%d %d %d", &n, &m, &r);

	edge *ES;
	ES = new edge [m];

	for(k = 0; k < m; k++){
		scanf("%d %d %d", &from, &to, &cost);
		ES[k] = init(from, to, cost);
	}

	int *d;
	d = new int [n];
	for(int i = 0; i < n; i++){ d[i] = 0; }
	bool *check;
	check = new bool [n];
	for(int i = 0; i < n; i++){ check[i] = false; }
	check[r] = true;
	
	for(int i = 1; i < n; i++){  // n - 1 loop.
		for(k = 0; k < m; k++){
			from = ES[k].from, to = ES[k].to;
			if(check[from] == false) continue;
			cost = ES[k].cost;
			if(check[to] == false){
				d[to] = d[from] + cost;
				check[to] = true;
			}else{
				if(d[from] + cost < d[to]){ d[to] = d[from] + cost; }
			}
		}
	}
	for(k = 0; k < m; k++){
		from = ES[k].from, to = ES[k].to;
		if(check[from] && check[to]){
			cost = ES[k].cost;
			if(d[from] + cost < d[to]){
				printf("NEGATIVE CYCLE\n"); break;
			}
		}
	}
	if(k == m){
		for(int i = 0; i < n; i++){
			if(check[i]){
				printf("%d\n", d[i]);
			}else{
				printf("INF\n");
			}
		}
	}
	delete [] ES, delete [] d, delete [] check;
	return 0;
}