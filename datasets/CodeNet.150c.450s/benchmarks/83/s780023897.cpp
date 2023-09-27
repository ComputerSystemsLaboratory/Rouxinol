#include <cstdio>
#include <iostream>
#include <utility>

using namespace std;

int main() {

	int DIAGONAL = 0;
	int TOP = 1;

	int N, W;
	scanf("%d %d", &N, &W);

	int C[N + 1][W + 1];
	int G[N + 1][W + 1];

	for (int i = 0; i <= W; ++i) {
		C[0][i] = 0;
		G[0][i] = DIAGONAL;
	}
	for (int i = 0; i <= N; ++i) {
		C[i][0] = 0;
	}

	pair<int, int> items[N + 1];

	for (int i = 1; i <= N; ++i) {
		int v, w;
		scanf("%d %d", &v, &w);
		items[i] = make_pair(v, w);
	}

	for (int i = 1; i <= N; ++i) {
		for (int w = 01; w <= W; ++w) {
			if (items[i].second <= w) {
				if (items[i].first + C[i - 1][w - items[i].second] > C[i - 1][w]) {
					C[i][w] = items[i].first + C[i - 1][w - items[i].second];
					G[i][w] = DIAGONAL;
				} else {
					C[i][w] = C[i - 1][w];
					G[i][w] = TOP;
				}
			} else {
				C[i][w] = C[i - 1][w];
				G[i][w] = TOP;
			}
		}
	}

	cout << C[N][W] << endl;

	return 0;
}