#include <iostream>
using namespace std;


void bubbleSort(int A[], int N) {
	bool flag = true;

	int counter = 0;
	while(flag) {
		flag = false;
		for(int j=N-1;j>=0;j--) {
			if(A[j] < A[j-1]) {
				int tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				flag = true;
				counter++;
			}
		}
	}

	for(int i=0;i<N;i++) {
		cout << A[i];
		if(i!=N-1) {
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

	bubbleSort(a, n);


	return 0;
}