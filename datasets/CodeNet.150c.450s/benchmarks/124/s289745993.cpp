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

int n;
int M[MAX][MAX]; //u??????v??????????????????

void dijkstra() {
	//?§????s???????§???????v?????§??????????????????
	int d[MAX]; memset(d, 0x3f, sizeof(d)); d[0] = 0;
	int color[MAX] = { GRAY };

	while (true) {
		int minv = INF;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (minv > d[i] && color[i] != BLACK) {
				u = i;
				minv = d[i];
			}
		}
		if (u == -1)break;
		color[u] = BLACK;
		for (int v = 0; v < n; v++) {
			if (color[v] != BLACK&&M[u][v] != INF) {
				d[v] = min(
					d[v],
					d[u] + M[u][v]
				);
				//if (d[v] > d[u] + M[u][v]) {
				//	d[v] = d[u] + M[u][v];
				//	color[v] = GRAY;
				//}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
	}
}

int main() {
	memset(M, 0x3f, sizeof(M));
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			M[u][v] = c;
		}
	}
	dijkstra();
	return 0;
}