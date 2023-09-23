#include<iostream>
#include<algorithm>

using namespace std;

const int INF = 10000000;
int n;
int d[10][10];

int main() {
	while (cin >> n, n) {
		int town_max = 0;
		for (int i = 0; i < 10; i++)for (int j = 0; j < 10; j++) {
			if (i == j)d[i][j] = 0;
			else d[i][j] = INF;
		}
		for (int i = 0; i < n; i++) {
			int a, b, f;
			cin >> a >> b >> f;
			town_max = max(town_max, max(a, b));
			d[a][b] = f, d[b][a] = f;
		}
		for (int k = 0; k <= town_max; k++) {
			for (int i = 0; i <= town_max; i++) {
				for (int j = 0; j <= town_max; j++) {
					if (d[i][j] > d[i][k] + d[k][j]) {
						d[i][j] = d[i][k] + d[k][j];
					}
				}
			}
		}
		int ans = INF,node;
		for (int i = 0; i <= town_max; i++) {
			int total = 0;
			for (int j = 0; j <= town_max; j++) {
				total += d[i][j];
			}
			if (ans > total)node = i, ans = total;
		}
		cout << node << " " << ans << endl;
	}
	return 0;
}