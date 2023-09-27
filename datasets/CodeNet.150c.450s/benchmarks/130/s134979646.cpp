#include <iostream>
using namespace std;

#define INDEX (i * m + j)

int main() {
	int n, m,num;
	cin >> n >> m;
	int* matrix = new int[n*m];
	int* vec = new int[m];
	for (int i = 0; i < n; i++) {
	    for(int j = 0; j < m; j++){
	    	cin >> num;
	    	matrix[INDEX] = num;
	    }
	}
	for (int i = 0; i < m; i++) {
		cin >> num;
		vec[i] = num;
	}
	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int j = 0; j < m; j++) {
			c += matrix[INDEX] * vec[j];
		}
		cout << c << endl;
	}
	delete[] matrix;
	delete[] vec;
	return 0;
}