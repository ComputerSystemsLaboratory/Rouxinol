#include <iostream>
#include <algorithm>
using namespace std;

int solve(int n, int s, int l) {
	if (n == 0) {
		if (s == 0) return 1;
		else return 0;
	}
	int res = 0, h = min(l, 9);
	for (int i = h + 1; i < 10; i++) {
		res += solve(n - 1, s - i, i);
	}
	return res;
}

int main() {
	int n, s;
	while (cin >> n >> s) {
		if (n == 0 && s == 0) break;
		cout << solve(n, s, -1) << endl;
	}
	return 0;
}