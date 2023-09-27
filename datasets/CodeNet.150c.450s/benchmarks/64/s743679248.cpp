#include<iostream>
using namespace std;

bool solve(int n, int A[], int m, int i) {
	if (m == 0) return true;
	if (i >= n) return false;
	return solve(n, A, m, i + 1) || solve(n, A, m - A[i], i + 1);
}

bool solve(int n, int A[], int m) {
	return solve(n, A, m, 0);
}

int main() {
	int n,q,A[2000],m;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> A[i];
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (solve(n, A, m)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}

