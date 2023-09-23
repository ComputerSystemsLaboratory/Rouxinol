#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C

bool is_prime(int x) {
	if (x == 2) return true;
	if (x < 2 || x % 2 == 0) return false;
	int sq = sqrt(x);
	for (int i = 3; i <= sq; i += 2) {
		if (x % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (is_prime(a)) ans++;
	}
	cout << ans << endl;
	return 0;
}