//ITP1_7_D
#include <iostream>
using namespace std;

int n, m, l;
int array_a[110][110], array_b[110][110];
long long array_c[110][110];

long long calc(int i, int j) {
	long long sum = 0;
	for (int k = 0; k < m; k++) {
		sum += array_a[i][k] * array_b[k][j];
	}
	return sum;
}

int main() {
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array_a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> array_b[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			array_c[i][j] = calc(i, j);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << array_c[i][j];
			if (j == l - 1) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}