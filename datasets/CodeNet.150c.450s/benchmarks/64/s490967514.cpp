#include <iostream>
#include <string>
using namespace std;

#define N 30
#define W 2000

int n;
int a[N];
bool dp[N][W];
bool dpt[N][W];

bool solve(int, int);

int main(void) {
	int q;
	int p;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < W; j++) {
			dpt[i][j] = false;
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> q;
	while (q--) {
		cin >> p;
		if (solve(0, p))cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}

bool solve(int i, int m) {
	if (dpt[i][m]) return dp[i][m];
	if (m == 0) {
		dpt[i][m] = true;
		dp[i][m] = true;
		return true;
	}
	else if (i >= n) {
		dpt[i][m] = true;
		return dp[i][m] = false;
	}
	else if (solve(i + 1, m)) {
		dpt[i][m] = true;
		return dp[i][m] = true;
	}
	else if (solve(i + 1, m - a[i])){
		dpt[i][m] = true;
		return dp[i][m] = true;
	}
	else {
		dpt[i][m] = true;
		return false;
	}
}