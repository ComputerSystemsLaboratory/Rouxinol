#include <iostream>
using namespace std;

void selectionSort(int A[], int N) {

	int counter = 0;

	for(int i=0;i<N;i++) {
		int minj = i;
		for(int j=i;j<N;j++) {
			if(A[j] < A[minj]) {
				minj = j;

			}
		}
		int tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
		if(i != minj) {
			counter++;
		}

	}

	for(int i=0;i<N;i++) {
		cout << A[i];
		if(i != N-1) {
			cout << " ";
		}
	}
	cout << endl;
	cout << counter << endl;
}


int main(void) {

	int n;
	cin >> n;

	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	selectionSort(a, n);


	return 0;
}