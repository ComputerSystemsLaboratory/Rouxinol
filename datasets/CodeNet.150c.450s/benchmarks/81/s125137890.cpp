#include<cstdio>
using namespace std;
static const int MAX_V = 10;
static const int MAX_E = 45;
static const int INFTY = (1 << 21);
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX_V][MAX_V];

int dijkstra(int s){
	int mincost;
	int d[MAX_V], color[MAX_V];

	for(int i = 0; i < MAX_V; i++){
		d[i] = INFTY;
		color[i] = WHITE;
	}

	d[s] = 0;
	color[s] = GRAY;
	while(true){
		int u;
		mincost = INFTY;
		for(int i = 0; i < MAX_V; i++){
			if(mincost > d[i] && color[i] != BLACK){
				u = i;
				mincost = d[i];
			}
		}

		if(mincost == INFTY) break;

		color[u] = BLACK;

		for(int v = 0; v < MAX_V; v++){
			if(color[v] != BLACK && M[u][v] != INFTY){
				if(d[v] > d[u] + M[u][v]){
					d[v] = d[u] + M[u][v];
					color[v] = GRAY;
				}
			}
		}
	}
	int sum_d = 0;
	for(int i = 0; i < MAX_V; i++){
		if(d[i] != INFTY){
			sum_d += d[i];
		}
	}
	return sum_d;
}

int main(void){
	while(true){
		scanf("%d", &n);
		if(n == 0) break;

		for(int i = 0; i < MAX_V; i++){
			for(int j = 0; j < MAX_V; j++){
				M[i][j] = INFTY;
			}
		}

		for(int i = 1; i <= n; i++){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			M[a][b] = M[b][a] = c;
		}

		int min_v, min_d = INFTY;
		for(int i = 0; i < MAX_V; i++){
			int dist = dijkstra(i);
			//printf("%d %d\n", i, dist);
			if(dist < min_d && dist != 0){
				min_d = dist;
				min_v = i;
			}
		}

		printf("%d %d\n", min_v, min_d);
	}

	return 0;
}