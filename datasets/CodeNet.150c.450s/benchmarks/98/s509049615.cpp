#include <iostream>
using namespace std;

int n, m;
int a[100], b[100];

void solve() {
	int asum = 0, bsum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		asum += a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
		bsum += b[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (asum - a[i] + b[j] == bsum - b[j] + a[i]) {
				cout << a[i] << " " << b[j] << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main() {
	while (cin >> n >> m , n) {
		solve();
	}
}