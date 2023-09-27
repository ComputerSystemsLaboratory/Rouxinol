#include<iostream>
using namespace std;
int main() {
	int a[12][10],j, i, n, b, f, r, v, k,l,m;
	for (i = 0; i < 12; i++) {
		for (j = 0; j < 10; j++) {
			a[i][j] = 0;
		}
	}
	cin >> n;
	for (k = 0; k < n; k++) {
		cin >> b >> f >> r >> v;

		if (b == 1) {
			a[f - 1][r - 1] += v;
		}
		else if (b == 2) {
			a[2 + f][r - 1] += v;
		}
		else if (b == 3) {
			a[5 + f][r - 1] += v;
		}
		else if (b == 4) {
			a[8 + f][r - 1] += v;
		}
	}
	for (l = 0; l < 12; l++) {
		if (l%3==0&&l!=0) {
			cout  << "####################"<<endl;
		}
		for (m = 0; m < 10; m++) {
			cout <<" "<< a[l][m];
		}
		
		cout << endl;
	}
	return 0;
}