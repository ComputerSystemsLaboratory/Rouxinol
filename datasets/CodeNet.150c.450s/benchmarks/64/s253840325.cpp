#include <cstdio>
#include <iostream>

using namespace std;

int memo[2000];

void makeMemo(int v, int i, int n, int A[]) {

	memo[v] = 1;

	if (i == n)
		return;

	makeMemo(v, i + 1, n, A);
	makeMemo(v + A[i], i + 1, n, A);
}
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

	for (int i = 0; i < 2000; ++i)
		memo[i] = 0;

	makeMemo(0, 0, n, A);

	for (int i = 0; i < q; ++i) {
		if (memo[m[i]] == 1) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}