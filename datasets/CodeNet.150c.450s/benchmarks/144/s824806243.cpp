#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <queue>
#include <stack>
using namespace std;
typedef vector<long long int> vi;
typedef vector< vi > vvi;
int main() {
	int n, m, l;
	cin >> n >> m >> l;
	vvi a(n, vi(m));
	vvi b(m, vi(l));
	vvi c(n, vi(l));
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			if (j == l - 1) {
				cout << c[i][j] << endl;
			}
			else {
				cout << c[i][j] << " ";
			}
		}
	}
}