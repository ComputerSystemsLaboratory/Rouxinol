#include<iostream>
using namespace std;

int main() {
	long n, m, l, i, j, k,
		box1[100][100] = {},
		box2[100][100] = {},
		box3[100][100] = {};

	cin >> n >> m>>l;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> box1[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> box2[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++) {
				box3[i][j] += box1[i][k] * box2[k][j];
			}
		}
		}
	
	for(i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			if (j == (l - 1)) {
				cout << box3[i][j];
			}
			else {
				cout << box3[i][j] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
