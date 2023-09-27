#include <cstdio>
#include <iostream>

using namespace std;

bool check(int m, int i, int A[], int n) {

	if (m == 0) {
		return true;
	}

	if (i >= n) {
		return false;
	}

	return check(m, i + 1, A, n) || check(m - A[i], i + 1, A, n);
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
	int Q[q];
	for (int i = 0; i < q; ++i) {
		int m;
		scanf("%d", &m);
		Q[i] = m;
	}

	for (int i = 0; i < q; ++i) {
		if (check(Q[i], 0, A, n)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}