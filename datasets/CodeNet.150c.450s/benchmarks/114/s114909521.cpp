#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];

int prim() {
	int d[MAX],
		p[MAX] = { -1 },
		color[MAX] = {};//WHITE
	fill(d, d + MAX, INF);
	d[0] = 0;

	while (true) {
		int u, minv = INF;
		for (int i = 0; i < n; i++) {
			if (color[i] != BLACK&&d[i] < minv) {
				minv = d[i];
				u = i;
			}
		}

		if (minv == INF) { break; }

		color[u] = BLACK;

		for (int v = 0; v < n; v++) {
			if (color[v] != BLACK&&M[u][v] != INF) {
				if (M[u][v] < d[v]) {
					d[v] = M[u][v];
					p[v] = u;
					color[v] = GRAY;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] != -1)sum += M[i][p[i]];
	}
	return sum;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int a; cin >> a;
			M[i][j] = (a == -1) ? INF : a;
		}
	}

	cout << prim() << endl;

	return 0;
}