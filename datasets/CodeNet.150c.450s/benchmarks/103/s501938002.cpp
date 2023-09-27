#include <iostream>

using namespace std;;

int n, s, ans;

void dfs(int i, int sum, int num) {
	if (i == n&&sum == s) {
		ans++;
		return;
	}
	for (int j = num; j <= 9; j++) {
		dfs(i + 1, sum + j, j + 1);
	}
	return;
}

int main() {
	while (1) {
		ans = 0;
		cin >> n >> s;
		if (n == 0 && s == 0) {
			break;
		}
		dfs(0, 0, 0);
		cout << ans << endl;
	}
	return 0;
}