#include<iostream>
using namespace std;

int main() {
	int n, p, q=0, i, j, k,
	box1[100][100] = {},
	box2[100] = {};
	cin >> n >> p;
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			cin >> box1[i][j];
		}
	}
	for (k = 0; k < p; k++) {
		cin >> box2[k];
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++) {
			q += box1[i][j] * box2[j];
		}
		cout << q << "\n";
		q = 0;
	}
	
	return 0;
}
