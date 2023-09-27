#include <iostream>
using namespace std;

int main(){
	int *a, *b;
	int n, m;
	cin >> n >> m;
	a = new int[n * m];
	b = new int[m];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[m * i + j];
		}
	}
	for(int j = 0; j < m; ++j) {
		cin >> b[j];
	}

	for(int i = 0; i < n; ++i) {
		int ci = 0;
		for(int j = 0; j < m; ++j) {
			ci += a[m * i + j] * b[j];
		}
		cout << ci << endl;
	}
	
	delete[] a;
	delete[] b;
	return 0;
}