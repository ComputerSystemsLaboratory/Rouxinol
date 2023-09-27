// 2016-12-04
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	int a[1000];
	while (cin >> n, n) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int m = 1000000;
		for (int i = 1; i < n; i++) {
			m = min(m, a[i] - a[i - 1]);
		}
		cout << m << endl;
	}
	return 0;
}