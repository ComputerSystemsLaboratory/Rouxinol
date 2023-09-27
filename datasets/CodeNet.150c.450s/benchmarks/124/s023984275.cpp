#include <iostream>

using namespace std;

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 99999999

int color[MAX];
int M[MAX][MAX];
int d[MAX];
int p[MAX];
int n;

int dijkstra(int s)
{

	int mincost;
	int u;

	for (int i = 0; i < n; i++) {
		d[i] = INFTY;
		p[i] = -1;
	}
	d[s] = 0;

	while (true) {
		mincost = INFTY;

		for (int i = 0; i < n; i++) {
			if (color[i] != BLACK&&d[i] < mincost) {
				mincost = d[i];
				u = i;
			}
		}

		if (mincost == INFTY) {
			break;
		}

		color[u] = BLACK;

		for (int i = 0; i < n; i++) {
			if (color[i] != BLACK&&M[u][i] != INFTY) {
				if (d[u] + M[u][i] < d[i]) {
					d[i] = d[u] + M[u][i];
					p[i] = u;
					color[i] = GRAY;
				}
			}
		}


	}


	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += d[i];
	}

	return sum;


}

int main(void)
{

	cin >> n;

	int u;
	int k;
	int v;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = INFTY;
		}
	}


	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			cin >> M[u][v];
		}
	}

	dijkstra(0);

	for (int i = 0; i < n; i++) {
		cout << i << " " << d[i] << endl;
	}

	return 0;
}