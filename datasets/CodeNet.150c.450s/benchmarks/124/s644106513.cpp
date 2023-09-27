#include <iostream>
#include <algorithm>
#define N 100
#define INF (1<<30)
using namespace std;

int n, M[N][N], d[N], color[N] = {0};

void Dijk(int s) {
	int min;
	for (int i = 0;i < n;i++) d[i] = INF;
	d[s] = 0;
	color[s] = 1;
	while (true) {
		int u=-1;
	    min = INF;
		for (int i = 0;i < n;i++) {
			if (color[i] != 2 && d[i] < min)
			{
				u = i;
				min = d[u];
			}
		}

		if (u==-1) break;

		color[u] = 2;

		for (int v = 0;v < n;v++) {
			if (color[v] != 2 && M[u][v] != INF)
				if (d[v] > d[u] + M[u][v]) {
					d[v] = d[u] + M[u][v];
					color[v] = 1;
				}
		}
	}

	for(int i=0;i<n;i++)
	cout<<i<<" "<<d[i]<<endl;

}

int main() {

	for (int i = 0;i < N;i++)
		for (int j = 0;j < N;j++) M[i][j] = INF;

	cin >> n;
	int u, v, k;
	for (int i = 0;i < n;i++) {
		cin >> u;
		cin >> k;
		for (int j = 0;j < k;j++) {
			cin >> v;
			cin >> M[u][v];
		}
	}

	Dijk(0);

}