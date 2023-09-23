#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int N[4][3][10];
int main() {
	int n,b,f,r,v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		N[b-1][f-1][r-1] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				if (k == 9) {
					cout << " " << N[i][j][k] << endl;
				}
				else {
					cout << " " << N[i][j][k];
				}
			}
		}
		if (i != 3) {
			for (int l = 0; l < 20; l++) {
				cout << '#';
			}
			cout << endl;
		}
	}
}