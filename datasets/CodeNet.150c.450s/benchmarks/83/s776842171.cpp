#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int N, W;
	int v[101], w[101];
	int T[101][10001];

	cin >> N >> W;

	for (int i = 0; i <= W; i++) {
		T[0][i] = 0;
	}

	for (int i = 1; i <= N; i++) {
		cin >> v[i] >> w[i];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < w[i]; j++) {
			T[i][j] = T[i - 1][j];
		}
		for (int j = w[i]; j <= W; j++) {
			T[i][j] = max(T[i - 1][j - w[i]] + v[i], T[i - 1][j]);
		}
	}

	cout << T[N][W] << endl;

	return 0;
}