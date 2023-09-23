#include <iostream>
#include <climits>
using namespace std;

void insertionSort(int *A, int N) {
	for (int i=0; i<N; i++) {
		int v = A[i];
		int j = i-1;
		while (j >= 0 && A[j] > v) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;

		for (int j=0; j<N; j++) {
			cout << A[j];
			if (j!=N-1) cout << ' ';
		}
		cout << endl;
	}
}

int main() {
	int N;
	cin >> N;

	int a[N];
	for (int i=0; i<N; i++)
		cin >> a[i];

	insertionSort(a, N);

	return 0;
}
