#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include <queue>
#include <string>


using namespace std;

const double PI = 3.14159265358979;

int G[101][101];
int visited[101];
int n;

int d[101];
int p[101];

void dijkstra(int startpoint) {

	for (int i = 0; i < n; i++)	{
		d[i] = INT_MAX;
		p[i] = -1;
	}

	d[startpoint] = 0;

	while (true) {

		int minx = INT_MAX;
		int u = -1;
		for (int i = 0; i < n; i++)	{
			if (!visited[i] && minx > d[i]) {
				minx = d[i];
				u = i;
			}
		}
		if (u == -1) break;

		visited[u] = 1;
		
		for (int i = 0; i < n; i++)	{
			if (!visited[i] && G[u][i] < INT_MAX) {
				if (d[u] + G[u][i] < d[i]) {
					d[i] = d[u] + G[u][i];
					p[i] = u;
				}
			}
		}
	}
}

int main() {
	
	
	cin >> n;
	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++) {
			G[i][j] = INT_MAX;
		}
	}

	for (int i = 0; i < n; i++)	{
		int u, k; cin >> u >> k;
		for (int j = 0; j < k; j++)	{
			int v, w; cin >> v >> w;
			G[u][v] = w;
		}
	}

	dijkstra(0);

	for (int i = 0; i < n; i++)	{
		cout << i << " " << d[i] << endl;
	}

	return 0;
}

