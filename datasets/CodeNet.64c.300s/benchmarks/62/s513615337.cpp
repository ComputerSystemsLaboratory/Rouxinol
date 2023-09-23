#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;



int main() {
	int n, m;
	int a[100][100] = {};
	int b[100] = {};
	int c[100] = {};
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			//cout << a[i][j] << endl;
		}
	}
	for (int z = 0; z < m; z++) {
		cin >> b[z];
		//cout << b[m] << endl;
	}
	for (int g = 0; g < n; g++) {
		for (int h = 0; h < m; h++) {
			c[g] += (a[g][h] * b[h]);
			//cout << b[g] << endl;
		}
		cout << c[g] << endl;
	}


	return 0;
}