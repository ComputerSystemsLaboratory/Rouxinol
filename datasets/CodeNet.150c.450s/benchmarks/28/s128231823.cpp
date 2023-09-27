#include <iostream>
#define M 100000
using namespace std;
typedef long long llong;
llong T[M];
int n, k;

int check(llong p) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		llong x = 0;
		for (i; x + T[i] <= p; x += T[i++]) if (i == n)return n;
	}
	return i;
}

llong solve() {
	llong left = 0, right = M * M;
	while (right - left > 1) {
		llong mid = (right + left) / 2;
		int x = check(mid);
		if (x >= n)right = mid;
		else left = mid;
	}
	return right;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> T[i];
	llong x = solve();
	cout << x << endl;
	return 0;
}