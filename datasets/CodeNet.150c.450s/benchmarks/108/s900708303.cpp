#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n;
vector<int> G[MAX];
int d[MAX];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		d[i] = -1;
	}
	for (int i = 0, u, k; i < n; i++) {
		cin >> u >> k;
		for (int j = 0, v; j < k; j++) {
			cin >> v;
			G[u - 1].push_back(v - 1);
		}
	}
	queue<int> q;
	q.push(0);
	d[0] = 0;
	while (!q.empty()) {
		for (int &v : G[q.front()]) {
			if (d[v] == -1) {
				q.push(v);
				d[v] = d[q.front()] + 1;
			}
		}
		q.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << ' ' << d[i] << endl;
	}
	return 0;
}