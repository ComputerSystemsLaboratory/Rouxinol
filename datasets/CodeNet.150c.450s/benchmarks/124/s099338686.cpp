#include <iostream>
#include <vector>
using namespace std;

int n;
const int INF = 1000000;
vector<vector<int> > v, c;
vector<int> w;

void trip(int id, int dp) {
	if (dp > n)
		return;

	for (int j = 0; j < (int)v[id].size(); j++) {
		if (w[v[id][j]] > w[id] + c[id][j]) {
			w[v[id][j]] = w[id] + c[id][j];
			trip(v[id][j], dp + 1);
		}
	}
}

int main()
{
	cin >> n;

	int u, k, v1, c1;
	v.resize(n);
	c.resize(n);
	w.assign(n, INF);

	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v1 >> c1;
			v[u].push_back(v1);
			c[u].push_back(c1);
		}
	}

	w[0] = 0;
	trip(0, 1);

	for (int i = 0; i < n; i++)
		cout << i << " " << w[i] << endl;

	return 0;
}
