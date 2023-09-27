#include <bits/stdc++.h>
#define PI 3.14159265359
#define NIL (-1)
using namespace std;
const int64_t MOD = 1e9 + 7;

int n;
vector<vector<int>> M(100, vector<int>(100));
vector<int> d(100), C(100);
static const int INFTY = INT_MAX;

void bfs(int s) {
	for (int i = 0; i < n; i++) {
		C.at(i) = 0;
		d.at(i) = INFTY;
	}

	C.at(s) = 1;
	d.at(s) = 0;
	queue<int>q;
	q.push(s);

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int i = 0; i < n; i++) {
			if (M.at(u).at(i) && (C.at(i) == 0)) {
				C.at(i) = 1;
				d.at(i) = d.at(u) + 1;
				q.push(i);
			}
		}

		C.at(u) = 2;
	}

	for (int i= 0; i < n; i++) {
		cout << i + 1 << ' ' << (d.at(i) == INFTY ? -1 : d.at(i)) << endl;
	}
}

int main() {
	int u, k, v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v >> k;

		for (int j = 0; j < k; j++) {
			int x;
			cin >> x;
			M.at(v - 1).at(x - 1) = true;
		}
	}

	bfs(0);

	return 0;
}
