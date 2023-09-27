#include <algorithm>
#include <cstdio>
#include <iostream>
#include <utility>

using namespace std;

int main() {

	int N, W;
	scanf("%d %d", &N, &W);
	int L[N + 1][W + 1];
	for (int i = 0; i <= W; ++i) {
		L[0][i] = 0;
	}
	for (int i = 0; i <= N; ++i) {
		L[i][0] = 0;
	}

	pair<int, int> items[N + 1];
	for (int i = 1; i <= N; ++i) {
		int v, w;
		scanf("%d %d", &v, &w);
		items[i] = make_pair(v, w);
	}

	for (int i = 1; i <= N; ++i) {
		for (int j = 1; j <= W; ++j) {
			if (items[i].second <= j) {
				L[i][j] = max(L[i - 1][j], L[i - 1][j - items[i].second] + items[i].first);
			} else {
				L[i][j] = L[i - 1][j];
			}
		}
	}

	cout << L[N][W] << endl;

	return 0;
}