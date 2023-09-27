#include <iostream>
#include <string>
#define MAX 10
#define INF 1 << 29
using namespace std;

int cost[MAX][MAX];

void warshall_floyd() {
	for (int k = 0; k < MAX; k++) {
		for (int i = 0; i < MAX; i++) {
			for (int j = 0; j < MAX; j++) {
				cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
			}
		}
	}
}

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < MAX; i++) {
			for (int j = 0; j < MAX; j++) {
				if (i == j) cost[i][j] = 0;
				else cost[i][j] = INF;
			}
		}
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			cost[a][b] = c;
			cost[b][a] = c;
		}
		warshall_floyd();
		int ans = INF;
		int town = -1;
		for (int i = 0; i < MAX; i++) {
			int res = 0;
			for (int j = 0; j < MAX; j++) {
				if (cost[i][j] == INF) continue;
				res += cost[i][j];
			}
			if (res > 0) {
				if (res < ans) {
					ans = res;
					town = i;
				}
			}
		}
		cout << town << ' ' << ans << endl;
	}
}