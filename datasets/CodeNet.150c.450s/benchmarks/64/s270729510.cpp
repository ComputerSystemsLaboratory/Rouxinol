#include<iostream>
using namespace std;
int n, q, A[30], m[210];
bool solve(int, int);
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < q; i++) {
		if (solve(0, m[i])) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}

bool solve(int i, int m) {
	//cerr << "solve(" << i << ", " << m << ") was called." << endl;
	if (m == 0) return true;
	if (i >= n) return false;
	bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}