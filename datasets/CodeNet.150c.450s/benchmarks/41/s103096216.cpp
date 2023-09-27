# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

int n;
long long d[100][100];

void floyd() {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			if (d[i][k] == INF)continue;
			for (int j = 0; j < n; j++) {
				if (d[k][j] == INF)continue;
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main() {
	int e, u, v, c;
	cin >> n >> e;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			d[i][j] = ((i == j) ? 0 : INF);
		}
	}
	for (int i = 0; i < e; i++) {
		cin >> u >> v >> c;
		d[u][v] = c;
	}

	floyd();

	bool negative = false;
	for (int i = 0; i < n; i++)if (d[i][i] < 0)negative = true;
	if (negative) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (j)cout << " ";
				if (d[i][j] == INF)cout << "INF";
				else cout << d[i][j];
			}
			cout << endl;
		}
	}
}