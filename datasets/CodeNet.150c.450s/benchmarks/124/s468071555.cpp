#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<bitset>
#include<vector>
#include<deque>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<cmath>
#include<iomanip>
#include <functional>
using namespace std;
typedef long long ll;
const int mod = 1000000007;
const int INF = 1 << 28;
//cout << fixed << std::setprecision(9)
//memset(a, 0, sizeof(a));
//--------------------------

const int MAX = 100;
const int WHITE = 0;
const int GRAY = 1;
const int BLACK = 2;
int n, M[MAX][MAX];

int dijkstra()
{
	int minv;
	int d[MAX];
	int color[MAX];

	for (int i = 0; i < n; i++) {
		d[i] = INF;
		color[i] = WHITE;
	}

	d[0] = 0;
	color[0] = GRAY;

	while (1) {
		minv = INF;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (minv > d[i] && color[i] != BLACK) {
				u = i;
				minv = d[i];
			}
		}

		if (u == -1) break;
		color[u] = BLACK;
		for (int v = 0; v < n; v++) {
			if (M[u][v] != INF && color[v] != BLACK) {
				if (d[v] > d[u] + M[u][v]) {
					d[v] = d[u] + M[u][v];
					color[v] = GRAY;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << i << " " << (d[i] == INF ? -1 : d[i]) << endl;
	}

	return 0;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			M[i][j] = INF;

	int k, c, u, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v >> c;
			M[u][v] = c;
		}
	}

	dijkstra();

	return 0;
}