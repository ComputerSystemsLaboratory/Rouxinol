#include <iostream>
#include <stack>
using namespace std;

const long N = 100;
const long WHITE = 0;
const long GRAY = 1;
const long BLACK = 2;

long n, M[N + 1][N + 1];
long color[N + 1], d[N + 1], f[N + 1], tt;
long nt[N + 1];

long next(long u){
	for (long v = nt[u]; v <= n; v++){
		nt[u] = v + 1;
		if (M[u][v]) return v;
	}
	return -1;
}

void dfs_visit(long r){
	for (long i = 1; i <= n; i++) nt[i] = 1;

	stack<long> S;
	S.push(r);
	color[r] = GRAY;
	d[r] = ++tt;

	while (!S.empty()){
		long u = S.top();
		long v = next(u);
		if (v != -1){
			if (color[v] == WHITE){
				color[v] = GRAY;
				d[v] = ++tt;
				S.push(v);
			}
		}
		else {
			S.pop();
			color[u] = BLACK;
			f[u] = ++tt;
		}
	}
}

void dfs(){
	for (long i = 1; i <= n; i++){
		color[i] = WHITE;
		nt[i] = 1;
	}
	tt = 0;

	for (long u = 1; u <= n; u++){
		if (color[u] == WHITE) dfs_visit(u);
	}
	for (long i = 1; i <= n; i++){
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
}

int main(){
	long u, k, v;
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