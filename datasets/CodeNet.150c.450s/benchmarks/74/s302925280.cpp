#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int INF = 50001;

	int n, m;
	scanf("%d %d", &n, &m);

	int T[n + 1];
	int C[m];
	for (int i = 0; i < m; ++i) {
		int coin;
		scanf("%d", &coin);
		C[i] = coin;
	}
//15 6
//1 2 7 8 12 50

	for (int j = 1; j <= n; ++j)
		T[j] = INF;
	T[0] = 0;

	for (int i = 0; i < m; ++i) {
		for (int j = C[i]; j <= n; ++j) {
			T[j] = min(T[j], T[j - C[i]] + 1);
		}
	}

	cout << T[n] << endl;
	return 0;
}