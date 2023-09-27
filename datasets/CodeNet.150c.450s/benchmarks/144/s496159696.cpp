#include <iostream>
using namespace std;

int main() {
	int n,m,l;
	int i,j,k;
	long sum = 0;
	cin >> n >> m >> l;
	int A[n][m];
	int B[m][l];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> B[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++) {
				sum += A[i][k] * B[k][j];
			}
			cout << sum;
			if (j != l-1) cout << " ";
			sum = 0;
		}
		cout << endl;
	}
	return 0;
}