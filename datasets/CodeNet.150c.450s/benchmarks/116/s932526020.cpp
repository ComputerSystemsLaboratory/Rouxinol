#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, a[100000], i, S[100000], m=0;
	while (cin >> n >> k, n, k) {
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		S[0] = 0;
		for (i = 0; i < k; i++) {
			S[0] += a[i];
		}
		for (i = 1; i < n - k + 1; i++) {
			S[i] = S[i - 1] - a[i - 1] + a[i + k - 1];
			m = max(m, S[i]);
		}
		cout << m << endl;
	}
}