#include <iostream>
using namespace std;

bool solve(int i, int m, int n, int A[]) {
	if (m == 0) return true;
	if (i >= n) return false;
	if (solve(i+1, m, n, A)) return true;
	if (solve(i+1, m - A[i], n, A)) return true;
	return false;
}

int main() {
	int n; cin >> n;
	int A[n]; for (int i=0; i<n; i++) cin >> A[i];
	int q; cin >> q;
	int m;
	for (int i=0; i<q; i++) {
		cin >> m;
		if (solve(0, m, n, A)) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}
	}
	return 0;
}
