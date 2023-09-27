#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>

using namespace std;

int main() {

	int N, W;
	scanf("%d %d", &N, &W);
	pair<int, int> items[N];
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
		for (int w = 1; w <= W; ++w) {
			if (items[i].second <= w) {
				if (items[i].first + V[i - 1][w - items[i].second] > V[i - 1][w]) {
					V[i][w] = items[i].first + V[i - 1][w - items[i].second];
				} else {
					V[i][w] = V[i - 1][w];
				}
			} else {
				V[i][w] = V[i - 1][w];
			}
		}
	}

	int maxv = 0;
	for (int i = 0; i <= W; ++i) {
		maxv = max(maxv, V[N][i]);
	}

	cout << maxv << endl;

	return 0;
}