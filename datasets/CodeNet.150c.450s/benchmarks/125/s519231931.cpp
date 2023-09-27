#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define N 100

int n, M[N][N];
int color[N], d[N], f[N], t;
int nt[N];

int nxt(int u){
	for (int v = nt[u]; v < n; ++v){
		nt[u] = v + 1;
		if (M[u][v]) return v;
	}
	return -1;
}

void dfs_visit(int idx){
	for (int i = 0; i < n; ++i) nt[i] = 0;

	stack<int> s; s.push(idx);
	color[idx] = GRAY;
	d[idx] = ++t;

	while (!s.empty()) {
		int u = s.top();
		int v = nxt(u);
		if (-1 != v){
			if (WHITE == color[v]){
				color[v] = GRAY;
				d[v] = ++t;
				s.push(v);
			}
		}
		else{
			s.pop();
			color[u] = BLACK;
			f[u] = ++t;
		}
	}
}

void dfs(){
	for (int i = 0; i < n; ++i)	color[i] = WHITE;

	t = 0;
	for (int i = 0; i < n; ++i){
		if (color[i] == WHITE) dfs_visit(i);
	}

	for (int i = 0; i < n; ++i)
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;

}


int main(){
	cin >> n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j) M[i][j] = 0;
	}

	for (int i = 0; i < n; ++i){
		int u, d, v; cin >> u >> d;
		for (int j = 0; j < d; ++j)
		{
			cin >> v;
			M[u - 1][v - 1] = 1;
		}
	}

	dfs();
	return 0;
}