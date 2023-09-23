#include<iostream>
using namespace std;
int main() {
	int a[100][100], b[100],c[100], m, n, i,ans,j,q,e,w,r;
	cin >> n >> m;
	for (r = 0; r < 100; r++) {
		c[r] = 0;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (e = 0; e < m; e++) {
		cin >> b[e];
	}
	for (q = 0; q < n; q++) {
		for (w = 0; w < m; w++) {
			c[q] += a[q][w] * b[w];
			
		}
		cout << c[q] << endl;
	}

	return 0;
}