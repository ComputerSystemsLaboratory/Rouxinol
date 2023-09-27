#include<iostream>
#define MAX 100
#define MAXNUM 10000001
using namespace std;
int n, minv, M[MAX][MAX];
int w[MAX], color[MAX] = {};

void dijkstra() {
	for (int i = 0; i < n; i++) {
		w[i] = MAXNUM;
	}
	w[0] = 0;
	color[0] = 1;
	while (1) {
		minv = MAXNUM;
		int u = -1;
		for (int i = 0; i < n; i++) {
			if (w[i] < minv && color[i] != 2) {
				u = i;
				minv = w[i];
			}
		}
		if (u == -1) break;
		color[u] = 2;
		for (int i = 0; i < n; i++) {
			if (color[i] != 2 && M[u][i] != MAXNUM) {
				if (w[i] > w[u] + M[u][i]) {
					w[i] = w[u] + M[u][i];
					color[i] = 1;
				}
			}
		}
	}
}

int main() {
	int u, k, v, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			M[i][j] = MAXNUM;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v >> c;
			M[u][v] = c;
		}
	}
	dijkstra();
	for (int i = 0; i < n; i++) {
		cout << i << " ";
		if (w[i] != MAXNUM) {
			cout << w[i] << endl;
		}
	}
}
