#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int M[m];
	for (int i = 0; i < m; ++i) {
		scanf("%d", &M[i]);
	}

	int T[n + 1];
	for (int i = 1; i <= n; ++i)
		T[i] = 50000;

	T[0] = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = M[i]; j <= n; ++j) {
			T[j] = min(T[j], T[j - M[i]] + 1);
		}
	}

	cout << T[n] << endl;

	return 0;
}