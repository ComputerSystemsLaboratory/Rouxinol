#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

enum state { New, Working, Done };

int main()
{
	int n;
	cin >> n;
	vector<vector<int>> am(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> am[i][j];
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
			if (d[i] < minv && status[i] != Done) {
				minv = d[i];
				node = i;
			}
		}
		if (node == -1) break;
		status[node] = Done;
		for (int i = 0; i < n; i++) {
			if (am[node][i] != -1 && am[node][i] < d[i] && status[i] != Done) {
				d[i] = am[node][i];
				p[i] = node;
				status[i] = Working;
			}
		}
	}
	cout << accumulate(d.begin(), d.end(), 0) << endl;
}

