#include<iostream>
using namespace std;
int n, s;
int ans = 0;
void solve(int i, int sum, int num) {
	if (i == n&&sum == s) {
		ans++;
		return;
	}
	for (int j = num; j <= 9; j++) {
		solve(i + 1, sum + j, j + 1);
	}
	return;
}
int main() {
	while (cin >> n >> s&&n + s) {
		ans = 0;
		solve(0, 0, 0);
		cout << ans << endl;
	}
}