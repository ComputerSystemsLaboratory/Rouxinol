#include <iostream>
#define SIZE 100

using namespace std;

void product(int, int, int, long int (*a)[SIZE], long int (*b)[SIZE], long int (*c)[SIZE]);

int main(void) {
	int n, m, l;
	long int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	product(n, m, l, a, b, c);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << c[i][j];
			if (j != l-1) {
				cout << " ";
			}
		}
		cout << "\n";
	}

	int k;
	cin >> k;

	return 0;
}

void product(int n, int m, int l, long int (*a)[SIZE], long int (*b)[SIZE], long int (*c)[SIZE]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			c[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}