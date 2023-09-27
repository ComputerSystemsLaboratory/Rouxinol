#include<iostream>
using namespace std;

int x[15000][15000],n,q,r,b;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> q >> r;
		for (int j = 0; j < r; j++) {
			cin >> b;
			x[i][b] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			if (j) { cout << ' '; }
			cout << x[i][j+1];
		}
		cout << endl;
	}
	return 0;
}