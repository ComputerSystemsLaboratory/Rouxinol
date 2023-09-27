#include <iostream>
#include <algorithm>

using namespace std;

long long x[100][100];
long long y[100][100];

int main()
{
	unsigned int n, m, l;

	cin >> n >> m >> l;
	for (unsigned int i = 0; i < n; ++i) {
		for (unsigned int j = 0; j < m; ++j) {
			cin >> x[i][j];
		}
	}
	for (unsigned int i = 0; i < m; ++i) {
		for (unsigned int j = 0; j < l; ++j) {
			cin >> y[i][j];
		}
	}

	for (unsigned int i = 0; i < n; ++i) {
		for (unsigned int j = 0; j < l; ++j) {
			long long z = 0;
			for (unsigned int k = 0; k < m; ++k) {
				z += x[i][k] * y[k][j];
			}
			cout << z;
			if (j + 1 == l)
				cout << endl;
			else
				cout << " ";
		}
	}

	return 0;
}

