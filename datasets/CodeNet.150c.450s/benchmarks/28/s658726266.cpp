#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int n, k, w[100010], sw[100010];
	long long l, r = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		sw[i] = w[i];
		r += w[i];
	}
	sort(sw, sw + n);
	l = sw[n - 1] - 1;
	while (r - l > 1) {
		long long a = 0, b = 1;
		long long m = (r + l) / 2;
		for (int i = 0; i < n; i++) {
			a += w[i];
			if (a > m) {
				a = w[i];
				b++;
			}
			if (i == n - 1 && a > m) {
				b++;
			}
		}
		if (b > k) {
			l = m;
		}
		else {
			r = m;
		}
	}
	cout << r << endl;
	return 0;
}