#include <iostream>
#include <cmath>
using namespace std;

void insertionSort(int A[], int N) {

	for(int k=0;k<N;k++) {
		cout << A[k];
		if(k!=N-1) {
			cout << " ";
		}
	}
		cout << endl;

	for(int i=1;i<N;i++) {
		int v = A[i];
		int j = i - 1;
		while(j>=0 && A[j] > v) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;

		for(int k=0;k<N;k++) {
			cout << A[k];
			if(k!=N-1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}


int main(void) {

	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	insertionSort(a, n);

	return 0;
}