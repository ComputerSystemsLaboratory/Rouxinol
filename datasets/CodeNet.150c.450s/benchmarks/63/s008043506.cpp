#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

int main()
{
	long n, u, k, r, v1, c1;
	const long INF = 0xFFFFFFFF;

	cin >> n >> k >> r;

	vector<vector<long> > v(n), c(n);
	vector<long> w(n, INF);
	typedef pair<long, long> wt;
	priority_queue<wt, vector<wt>, greater<wt> > que;

	for (long i = 0; i < k; i++) {
		cin >> u >> v1 >> c1;
			v[u].push_back(v1);
			c[u].push_back(c1);
	}

	w[r] = 0;
	que.push(wt(0, r));

	while (!que.empty()) {
		wt g = que.top();
		que.pop();

		int k = g.second;

		if (w[k] < g.first)
			continue;

		for (long i = 0; i < (long)v[k].size(); i++) {
			if (w[v[k][i]] > w[k] + c[k][i]) {
				w[v[k][i]] = w[k] + c[k][i];
				que.push(wt(w[v[k][i]], v[k][i]));
			}
		}
	}

	for (long i = 0; i < n; i++) {
		if (w[i] < INF)
			cout << w[i] << endl;
		else
			cout << "INF" << endl;
	}

	return 0;
}
