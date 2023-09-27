#include <iostream>
using namespace std;

const long N = 100;
const long WHITE = 0;
const long GRAY = 1;
const long BLACK = 2;

long n, M[N + 1][N + 1];
long color[N + 1], d[N + 1], f[N + 1], tt;

void dfs_visit(long u){
	long v;
	color[u] = GRAY;
	d[u] = ++tt;
	for (long v = 1; v <= n; v++){
		if (M[u][v] == 0) continue;
		if (color[v] == WHITE){
			dfs_visit(v);
		}
	}
	color[u] = BLACK;
	f[u] = ++tt;
}

void dfs(){
	for (long u = 1; u <= n; u++) color[u] = WHITE;
	tt = 0;

	for (long u = 1; u <= n; u++){
		if (color[u] == WHITE) dfs_visit(u);
	}
	for (long u = 1; u <= n; u++){
		cout << u << " " << d[u] << " " << f[u] << endl;
	}
}

int main(){
	long u, v, k;

	cin >> n;
	for (long i = 1; i <= n; i++){
		for (long j = 1; j <= n; j++){
			M[i][j] = 0;
		}
	}

	for (long i = 1; i <= n; i++){
		cin >> u >> k;
		for (long j = 1; j <= k; j++){
			cin >> v;
			M[u][v] = 1;
		}
	}

	dfs();

	return 0;
}