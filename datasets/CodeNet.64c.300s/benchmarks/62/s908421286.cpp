#include <iostream>
using namespace std;

int main()
{
		int n, m, i, j=0;
		cin >> n >> m;
		int a[n][m], b[m], c[n];
		for (i=0; i<n; i++) for (j=0; j<m; j++) cin >> a[i][j];
		for (i=0; i<m; i++) cin >> b[i];
		for (i=0; i<n; i++) c[i] = 0;

		for (i=0; i<n; i++) {
				for (j=0; j<m; j++) {
						c[i]+=a[i][j]*b[j];
						//cout << "i:" << i << ", j:" << j << ", c[" << i << "](=" << a[i][j] << "*" << b[m] << "):" << c[i] << "\n";
				}
		}

		for (i=0; i<n; i++) cout << c[i] << "\n";
}