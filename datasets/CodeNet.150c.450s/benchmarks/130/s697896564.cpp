#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
const int M = 100000;
const double pi = 3.141592653589;

int main(){
	int n, m;
	int a[1000][1000];
	int b[M];
	int o[M] = { 0 };

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			cin >> a[i][k];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			o[i] = o[i] + a[i][k] * b[k];
		}
		cout << o[i] << endl;
	}



	return 0;
}