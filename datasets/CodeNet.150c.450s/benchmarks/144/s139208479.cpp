#include <iostream>
using namespace std;

int main()
{
		int n, m, l, i, j, k;
		cin >> n >> m >> l;
		long int A[n][m], B[m][l], C[n][l];
		for (i=0; i<n; i++) for (j=0; j<m; j++) cin >> A[i][j];
		for (i=0; i<m; i++) for (j=0; j<l; j++) cin >> B[i][j];
		for (i=0; i<n; i++) for (j=0; j<l; j++) C[i][j] = 0;

		for (i=0; i<n; i++) {
				for (j=0; j<l; j++) {
						for (k=0; k<m; k++) {
								C[i][j] += A[i][k]*B[k][j];
						}
				}
		}

		for (i=0; i<n; i++) {
				for (j=0; j<l; j++) {
						if (j==l-1) cout << C[i][j] << "\n";
						else cout << C[i][j] << " ";
				}
		}
}