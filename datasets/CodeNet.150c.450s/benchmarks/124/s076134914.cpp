#include<iostream>
#include<algorithm>
using namespace std;

static const int MAX = 100;
static const int INFTY = 1000000000;
static const int WHITE = 0, BLACK = 2;

int n;
int A[MAX][MAX];
int d[MAX], color[MAX];

void sssp() {
	for (int i = 0; i < n; i++) {
		d[i] = INFTY;
		color[i] = WHITE;
	}

	d[0] = 0;

	while (1) {
		int minv = INFTY, u = -1;
		for (int i = 0; i < n; i++) { 
			if (d[i] < minv && color[i] != BLACK) {
				minv  = d[i];
				u = i;
			}
		}
		if (u == -1) break;
		color[u] = BLACK;

		for (int j = 0; j < n; j++) { 
			if (A[u][j] < INFTY && color[j] != BLACK) {
				d[j] = min(d[j], d[u] + A[u][j]);
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++) {
			A[i][j] = INFTY;
		}
	}
	
	for (int i = 0; i < n; i++) {
		int u, k, v;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> v >> t;
			A[u][v] = t;
		}
	}

	sssp();

	for (int i = 0; i < n; i++) {
		cout << i << ' ' << d[i] << endl;
	}

	return 0;
}