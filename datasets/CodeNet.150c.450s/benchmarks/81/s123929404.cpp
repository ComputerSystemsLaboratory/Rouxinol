#include <iostream>
#include <algorithm>
#define INF 1 << 16
#define MAX_V 10
using namespace std;
int d[MAX_V+1][MAX_V+1];
int maxv;

void warshall_floyd() {
	for (int k = 0; k <= maxv; ++k) {
		for (int i = 0; i <= maxv; ++i) {
			for (int j = 0; j <= maxv; ++j) {
				d[i][j] = (d[i][k] + d[k][j] < d[i][j]) ? d[i][k] + d[k][j] : d[i][j];
			}
		}
	}
	return;
}

int main() {
	int m, a, b, c, minv, minsum;

	while (cin >> m, m) {
		for (int i = 0; i < MAX_V; ++i) {
			for (int j = 0; j < MAX_V; ++j) {
				d[i][j] = (i == j) ? 0 : INF;
			}
		}

		maxv = 0;
		while (m--) {
			cin >> a >> b >> c;
			maxv = (b > maxv) ? a : maxv;
			maxv = (b > maxv) ? b : maxv;
			d[a][b] = c;
			d[b][a] = c;
		}
		warshall_floyd();

		int sum[MAX_V] = { 0 };
		for (int i = 0; i <= maxv; ++i) {
			for (int j = 0; j <= maxv; ++j) {
				sum[i] += d[i][j];
			}
		}

		minsum = INF;
		for (int i = 0; i <= maxv; ++i) {
			if (sum[i] < minsum) {
				minv = i;
				minsum = sum[i];
			}
		}
		cout << minv << " " << minsum << endl;
	}
	return 0;
}