#include<iostream>

using namespace std;

int main() {
	int i, j,k;	//i??????j????¨?
	int n, m, l;	//a=n*m????????????b=m*l??????
	int a[100][100], b[100][100],c,cc;
	long C[100][100];

	cin >>n>>m>>l;

	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			a[i][j] = 0;
			b[i][j] = 0;
			C[i][j] = 0;
		}
	}

	//??????A
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	
	//??????B
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	//??????C
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k <m; k++) {
				C[i][j] += a[i][k] * b[k][j];
			}
			cout << C[i][j];
			if (j != l - 1)cout << " ";
		}
		cout << endl;
	}
	return 0;
}