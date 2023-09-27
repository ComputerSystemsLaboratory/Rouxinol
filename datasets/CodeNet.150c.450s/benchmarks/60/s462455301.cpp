#include <iostream>
using namespace std;

int a[100][100];
int n;
int main() {
	cin >> n;
	int p,q,r;
	for (int i=0; i<n; ++i) {
		cin >> p >> q;
		for (int i=0; i<q; ++i) {
			cin >> r;
			a[p][r] = 1;
		}
	}
	for (int i=0; i<n; ++i) {
		for (int j=0; j<n-1; ++j) {
			cout << a[i+1][j+1] << " ";
		}
		cout << a[i+1][n] << endl;
	}
}