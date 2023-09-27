#include <cstdio>
#include <iostream>

using namespace std;

bool check(int m, int i, int v, int A[], int n) {

	if (v == m)
		return true;
	if (i == n || v > m)
		return false;

	return check(m, i + 1, v, A, n) || check(m, i + 1, v + A[i], A, n);
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

	for (int i = 0; i < q; ++i) {
		if (check(m[i], 0, 0, A, n)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}