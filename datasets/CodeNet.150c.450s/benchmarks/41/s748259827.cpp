#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

#define N 100
static const long long FAR = (1L << 31);

static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, m;
long long d[N][N];


void floyd(){
	for (int k = 0; k < n; ++k){
		for (int u = 0; u < n; ++u){
			if (FAR == d[u][k]) continue;
			for (int v = 0; v < n; ++v){
				if (FAR == d[k][v]) continue;
				d[u][v] = std::min(d[u][v], d[u][k] + d[k][v]);
			}
		}
	}
}


int main(){
	cin >> n >> m;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j)
			d[i][j] = ((i == j) ? 0 : FAR);
	}

	for (int i = 0; i < m; ++i) {
		int u, v, e; cin >> u >> v >> e;
		d[u][v] = e;
	}

 
	floyd();

	bool negitive = false;
	for (int i = 0; i < n; ++i) if (d[i][i] < 0) negitive = true;

	if (negitive) cout << "NEGATIVE CYCLE" << endl;
	else{
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j)
			{
				if (d[i][j] == FAR)	cout << "INF";
				else cout << d[i][j];
				if (j == n - 1) cout << endl;
				else cout << " ";

			}
		}
	}
	return 0;
}