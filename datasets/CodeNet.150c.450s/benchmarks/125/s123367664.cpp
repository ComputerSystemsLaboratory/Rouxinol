#include<iostream>
#include<cstdio>
#define MAX_N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;

int n, u, k, v;
int Adj[MAX_N][MAX_N];
int d[MAX_N], f[MAX_N], color[MAX_N];
int tt;

void initialize(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			Adj[i][j] = 0;
		}
	}
}

void check_adj(){
	Adj[u][v] = 1;
}

void dfs_visit(int u){
	color[u] = GRAY;
	d[u] = ++tt;
	for(int v = 0; v < n; v++){
		if(Adj[u][v] == 0) continue;
		if(color[v] == WHITE){
			dfs_visit(v);
		}
	}
	color[u] = BLACK;
	f[u] = ++tt;
}

void dfs(){
	tt = 0;
	for(int i = 0; i < n; i++) color[i] = WHITE;
	for(int i = 0; i < n; i++){
		if(color[i] == WHITE) dfs_visit(i);
	}
	for(int i = 0; i < n; i++){
		printf("%d %d %d\n", i + 1, d[i], f[i]);
	}
}

/* void print_adj(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << Adj[i][j];
			if(j == n - 1) cout << endl;
			else cout << " ";
		}
	}
} */

int main(void){
	cin >> n;
	initialize();
	for(int i = 0; i < n; i++){
		cin >> u;
		u--;
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> v;
			v--;
			check_adj();
		}
	}
	dfs();
	//print_adj();

	return 0;
}