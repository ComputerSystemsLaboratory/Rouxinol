#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int n, m, l; cin >> n >> m >> l;
	ll a[100][100];
	ll b[100][100];
	for (int y = 0; y < n; ++y) {
		for (int x = 0; x < m; ++x) {
			cin >> a[y][x];
		}
	}
	for (int y = 0; y < m; ++y) {
		for (int x = 0; x < l; ++x) {
			cin >> b[y][x];
		}
	}
	for (int y = 0; y < n; ++y) {
		for (int x = 0; x < l; ++x) {
			if (x) cout << " ";

			ll c = 0;
			for (int k = 0; k < m; ++k) {
				c += a[y][k] * b[k][x];
			}
			cout << c;
		}
		cout << endl;
	}
}