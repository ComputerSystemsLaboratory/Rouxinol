#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>

using namespace std;

int main() {

	int N, W;
	scanf("%d %d", &N, &W);

	pair<int, int> items[N + 1];
	for (int i = 1; i <= N; ++i) {
		int v, w;
		scanf("%d %d", &v, &w);
		items[i] = make_pair(v, w);
	}

	int V[N + 1][W + 1];
	for (int i = 0; i <= N; ++i) {
		V[i][0] = 0;
	}
	for (int i = 0; i <= W; ++i) {
		V[0][i] = 0;
	}

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= W; ++j) {
			if (items[i].second <= j) {
				V[i][j] = max(V[i - 1][j], V[i - 1][j - items[i].second] + items[i].first);
			} else {
				V[i][j] = V[i - 1][j];
			}
		}
	}
	int maxv = 0;
	for (int i = 1; i <= W; ++i) {
		maxv = max(maxv, V[N][i]);
	}
	cout << maxv << endl;

	return 0;
}