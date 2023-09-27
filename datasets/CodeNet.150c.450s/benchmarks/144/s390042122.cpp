#include <iostream>
using namespace std;

#define FILL(mat, n, m) for(i=0; i<(n); ++i) for(j=0; j<(m); ++j) cin >> ((mat)[i][j]);

int main()
{
	int n, m, l, i, j;
	cin >> n >> m >> l;

	unsigned long a[n][m], b[m][l];
	FILL(a, n, m);
	FILL(b, m, l);

	for(i=0; i<n; ++i) {
		for(j=0; j<l; ++j) {
			unsigned long prod = 0;
			for(int k=0; k<m; ++k)
				prod += a[i][k] * b[k][j];
			cout << prod << ((j==l-1) ? '\n' : ' ');
		}
	}

	return 0;
}

