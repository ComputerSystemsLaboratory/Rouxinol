#include <iostream>
using namespace std;

int n, m, l, a[100][100], b[100][100];
long c[100][100];

void make(int ar[100][100],int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> ar[i][j];
		}
	}
}

void mul() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			if (j == 0) {
				cout << c[i][j];
			}
			else {
				cout << " " << c[i][j];
			}
		}
		cout << endl;
	}
}

int main(){
	cin >> n >> m >> l;
	make(a, n, m);
	make(b, m, l);
	mul();

	return 0;
}