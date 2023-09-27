#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

enum state { New, Working, Done };

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> am(n, vector<int>(n, -1));
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			am[u][v] = c;
		}
	}

	vector<int> d(n, INT_MAX), p(n, INT_MAX);
	vector<state> status(n);
	d[0] = 0;
	p[0] = -1;
	status[0] = Working;
	while (true) {
		int minv = INT_MAX;
		int node = -1;
		for (int i = 0; i < n; i++) {
			if (status[i] != Done && d[i] < minv) {
				minv = d[i];
				node = i;
			}
		}
		if (minv == INT_MAX) break;
		status[node] = Done;
		for (int i = 0; i < n; i++) {
			if (am[node][i] != -1 && status[i] != Done && d[node] + am[node][i] < d[i]) {
				d[i] = d[node] + am[node][i];
				status[i] = Working;
			}
		}
	}

	for (int i = 0; i < n; i++) cout << i << " " << d[i] << endl;
}

