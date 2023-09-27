#include <iostream>
#include <queue>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_11_C

int main() {
	int n;
	cin >> n;
	int dist[n];
	vector<int> map[n];
	for (int i = 0; i < n; i++) {
		dist[i] = -1;
		int a, b, c;
		cin >> a >> c;
		for (int j = 0; j < c; j++) {
			cin >> b;
			map[a - 1].push_back(b - 1);
		}
	}
	
	queue<int> q;
	q.push(0);
	dist[0] = 0;
	while (q.size() > 0) {
		int c = q.front(); q.pop();
		for (int i = 0; i < map[c].size(); i++) {
			if (dist[map[c][i]] != -1) continue;
			dist[map[c][i]] = dist[c] + 1;
			q.push(map[c][i]);
		}
	}
	
	for (int i = 0; i < n; i++)
		cout << (i + 1) << " " << dist[i] << endl;
	return 0;
}