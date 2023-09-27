#include <cstdio>
#include <iostream>

using namespace std;

int n;
int A[20];

bool check(int i, int m) {
	if (m == 0) {
		return true;
	} else if (m < 0 || i == n) {
		return false;
	}
	return check(i + 1, m) || check(i + 1, m - A[i]);
}

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	int q;
	scanf("%d", &q);

	for (int i = 0; i < q; ++i) {
		int m;
		scanf("%d", &m);
		if (check(0, m)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}