#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector< vector<long int> > a, b, c;
	int n, m, l;

	cin >> n >> m >> l;

	a.resize(n);
	b.resize(m);

	for (int i = 0; i < n; ++i) {
		a[i].resize(m);
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; ++i) {
		b[i].resize(l);
		for (int j = 0; j < l; ++j) {
			cin >> b[i][j];
		}
	}

	c.resize(n);
	for (int i = 0; i < n; ++i) {
		c[i].resize(l);
		for (int j = 0; j < l; ++j) {
			for (int k = 0; k < m; ++k) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	int k;

	for (auto i : c) {
		k = 0;
		for (auto j : i) {
			cout << j;
			++k;
			if (k < l) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}