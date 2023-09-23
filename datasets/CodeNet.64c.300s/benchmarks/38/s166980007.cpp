#include <bits/stdc++.h>

using namespace std;

int balls[10];

int solve(int n, int a, int b) {
	if (n == 10) return 1;
	if (balls[n] < a && balls[n] < b) {
		return -1;
	}
	if (balls[n] < a) {
		return solve(n+1, a, balls[n]);
	}
	if (balls[n] < b) {
		return solve(n+1, balls[n], b);
	}
	int x = solve(n+1, balls[n], b),
		y = solve(n+1, a, balls[n]);
	if (x == -1 && y == -1) return -1;
	return 1;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 10; ++j)
			cin >> balls[j];
		if (solve(0, 0, 0) == -1) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}