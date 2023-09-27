#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m = 100000;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		m *= 1.05;
		if (m % 1000) {
			m += 1000 - m % 1000;
		}
	}
	cout << m << endl;
}