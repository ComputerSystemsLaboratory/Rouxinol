#include <iostream>
using namespace std;

int main(){
	int n, m, l;
	cin >> n >> m >> l;
	int* a = new int[n*m];
	int* b = new int[m*l];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i*m + j];
		}
	}
	for (int j = 0; j < m; j++){
		for (int k = 0; k < l; k++){
			cin >> b[j*l + k];
		}
	}
	long int val = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			val = 0;
			for (int k = 0; k < m; k++){
				val += a[i*m + k] * b[k*l + j];
			}
			cout << val << ((j == l - 1) ? "" : " ");
		}
		cout << endl;
	}
	delete[] a;
	delete[] b;
}