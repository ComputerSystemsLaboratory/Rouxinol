#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

struct Node {
	int k, d, f;
	vector<int> v;
};

#define MAX_N 100

Node node[MAX_N + 1];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int u;
		cin >> u;
		cin >> node[u].k;
		for (int j = 0; j < node[u].k; ++j) {
			int v;
			cin >> v;
			node[u].v.push_back(v);
		}
		node[u].d = -1;
	}
	queue<int> q;
	node[1].d = 0;
	q.push(1);
	while(!q.empty()) {
		int u = q.front(); q.pop();
		for (int i = 0; i < node[u].k; ++i) {
			int v = node[u].v[i];
			if (node[v].d == -1) {
				node[v].d = node[u].d + 1;
				q.push(v);
			}
		}
	}
	for (int i = 1; i <= n; ++i)
		cout << i << " " << node[i].d << endl;
	return 0;
}