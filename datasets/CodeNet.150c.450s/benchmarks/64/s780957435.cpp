#include <cstdio>
#include <iostream>

using namespace std;

void makeMemo(int v, int i, int A[], int n, int memo[]) {

	memo[v] = 1;

	if (i == n)
		return;

	makeMemo(v, i + 1, A, n, memo);
	makeMemo(v + A[i], i + 1, A, n, memo);
}

//?????¢
int main() {

	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	int q;
	scanf("%d", &q);
	int m[q];
	for (int i = 0; i < q; ++i) {
		scanf("%d", &m[i]);
	}

	int memo[2001];
	for (int i = 0; i <= 2000; ++i) {
		memo[i] = 0;
	}
	makeMemo(0, 0, A, n, memo);

	for (int i = 0; i < q; ++i) {
		if (memo[m[i]] == 1) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}