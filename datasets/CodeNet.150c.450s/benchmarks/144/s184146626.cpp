#include <iostream>
using namespace std;

void matSet(int* mat, int size) {
	int num;
	for (int i = 0; i < size; i++) {
		cin >> num;
		mat[i] = num;
	}
}

int main() {
	int n, m, l;
	cin >> n >> m >> l;
	int* matA = new int[n * m];
	int* matB = new int[m * l];
	matSet(matA, n * m);
	matSet(matB, m * l);
	
	for (int i = 0; i < n; i++) {
	    for(int j = 0; j < l; j++){
		    long cElm = 0;
	    	for(int k = 0 ; k < m; k++){
		        cElm += matA[i * m + k] * matB[k * l + j];
		    }
		    cout << cElm << (j < l - 1 ? " " : "\n");
	    }
	}
	delete[] matA;
	delete[] matB;
	return 0;
}