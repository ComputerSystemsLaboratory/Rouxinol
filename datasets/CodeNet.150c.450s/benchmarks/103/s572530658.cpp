#include <iostream>

using namespace std;

int n, s, ans;

void rep(int start, int depth, int sum) {
	for (int i = start; i < 10; i++) {
		if (depth == n) {
			if (sum + i == s) {
				ans++;
				return;
			}
		}
		else {
			rep(i+1, depth+1, sum + i);
		}
	}
}

int main() {
	while (1) {
		cin >> n >> s;
		if (n == 0 && s == 0)
			break;
		ans = 0;
		rep(0, 1, 0);
		cout << ans << endl;
	}
	return 0;
}