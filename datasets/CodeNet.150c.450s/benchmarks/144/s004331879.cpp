#include<iostream>

using namespace std;

int main(void) {
	int n, m, l;
	int a[101][101];
	int b[101][101];
	long int c[101][101] = {};

	cin >> n >> m >> l;

	for (int i = 1; i <= n; i++) {
		for (int s = 1; s <= m; s++) {
			cin >> a[i][s];
		}
	}

	for (int i = 1; i <= m; i++) {
		for (int s = 1; s <= l; s++) {
			cin >> b[i][s];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int t = 1; t <= l; t++) {
			for (int s = 1; s <= m; s++) {
				c[i][t] += a[i][s] * b[s][t];
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int s = 1; s <= l; s++) {
			cout<< c[i][s];
			if (s==l) {
				cout << "\n";
				break;
			}
			cout << " ";
		}
	}
	return 0;
}