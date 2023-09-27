#include<iostream>
using namespace std;

int n, A[30];

int solve(int i, int m) {
	if (m == 0) return true;
	if (i >= n) return false;

	int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
	return res;
}


int main(void) {
	int q;
	int m[300];

	cin >> n;

	for (int i = 0; i <= n - 1; i++) {
		cin >> A[i];
	}

	cin >> q;

	for (int i = 0; i <= q - 1;i++) {
		cin >> m[i];
	}

	for (int i = 0; i <= q - 1;i++) {
		if(solve(0, m[i])) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}