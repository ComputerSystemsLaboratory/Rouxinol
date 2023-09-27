#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <cmath>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;


const int BIG_NUM = 1e8;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> g(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		g[a].emplace_back(b);
		g[b].emplace_back(a);
	}

	vector<int> root(n,-1);
	root[0] = 0;
	
	queue<int> q;
	q.push(0);

	while (!q.empty()) {
		int v = q.front();
		q.pop();

		for (int u : g[v]) {
			if (root[u] >= 0) {
				continue;
			}

			root[u] = v;
			q.push(u);
		}
		
	}

	cout << "Yes" << endl;
	for (int i = 1; i < n; i++) {
		cout << root[i] + 1 << endl;
	}


}