#include "bits/stdc++.h"
using namespace std;

int main() {
	int r, c, ans = 0;
	cin >> r >> c;
	int a[r][c];
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << a[i][j] << " ";
			ans += a[i][j];
		}
		cout << ans << endl;
		ans = 0;
	}
	int sum = 0;
	for (int i = 0; i < c; ++i) {
		for (int j = 0; j < r; ++j) {
			ans += a[j][i];
		}
		sum += ans;
		cout << ans << " ";
		ans = 0;
	}
	cout << sum << endl;
}