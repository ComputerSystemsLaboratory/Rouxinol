#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			break;
		}
		vector<int> a(n);
		vector<int> b(m);
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> b[i];
			sum -= b[i];
		}
		int aa, bb;
		aa = bb = 1000;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if ((a[i] - b[j]) * 2 == sum && a[i]+b[j] < aa+bb) {
					aa = a[i];
					bb = b[j];
				}
			}
		}
		if (aa == 1000) {
			cout << -1 << endl;
		}
		else {
			cout << aa << ' ' << bb << endl;
		}
	}
	return 0;
}