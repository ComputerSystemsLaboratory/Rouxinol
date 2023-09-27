// Ref : https://book.mynavi.jp/ec/products/detail/id=35408

#include <iostream>
#include <queue>
#include <limits.h>

using namespace std;
static const int NMAX = 100;
int N, D[NMAX] = {};
bool G[NMAX][NMAX] = { { false } };

void breadthFirstSearch(int base) {
	int ix;
	for (int i = 0; i < N; i++) {
		D[i] = INT_MAX;
	}

	D[base] = 0;
	queue<int> q;
	q.push(base);
	while (!q.empty()) {
		ix = q.front(); q.pop();
		for (int i = 0; i < N; i++) {
			if (!G[ix][i]) continue;
			if (D[i] != INT_MAX) continue;
			D[i] = D[ix] + 1;
			q.push(i);
		}
	}

	for (int i = 0; i < N; i++) {
		cout << i + 1 << " " << ((D[i] == INT_MAX) ? (-1) : D[i]) << endl;
	}
}

int main() {
	int ix, deg, cache;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ix >> deg;
		for (int j = 0; j < deg; j++) {
			cin >> cache;
			G[ix-1][cache-1] = true;
		}
	}

	breadthFirstSearch(0);

	return 0;
}
