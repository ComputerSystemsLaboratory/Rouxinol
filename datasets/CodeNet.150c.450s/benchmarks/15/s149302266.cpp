#include <cstdio>
#include <iostream>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int S[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &S[i]);
	}

	int q;
	scanf("%d", &q);

	int cnt = 0;
	for (int i = 0; i < q; ++i) {
		int t;
		scanf("%d", &t);

		S[n] = t;
		int j = 0;
		while (S[j] != t) {
			j++;
		}
		if (j != n) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}