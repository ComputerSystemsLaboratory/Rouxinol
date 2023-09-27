#include<cstdio>
#define MAX_N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, u, k, v;
int adj[MAX_N][MAX_N];
int color[MAX_N], d[MAX_N], f[MAX_N], tt;

void dfs_visit(int num){
	color[num] = GRAY;
	d[num] = ++tt;
	for(int i = 0; i < n; i++){
		if(adj[num][i] == 0) continue;
		if(color[i] == WHITE){
			dfs_visit(i);
		}
	}
	color[num] = BLACK;
	f[num] = ++tt;
}

void dfs(){
	for(int i = 0; i < n; i++){
		color[i] = WHITE;
	}
	tt = 0;

	for(int i = 0; i < n; i++){
		if(color[i] == WHITE){
			dfs_visit(i);
		}
	}
}

int main(void){
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			adj[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		scanf("%d", &u);
		u -= 1;
		scanf("%d", &k);
		for(int j = 0; j < k; j++){
			scanf("%d", &v);
			v -= 1;
			adj[u][v] = 1;
		}
	}

	dfs();

	for(int i = 0; i < n; i++){
		printf("%d %d %d\n", i + 1, d[i], f[i]);
	}

	return 0;
}