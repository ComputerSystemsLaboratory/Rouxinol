#include <iostream>
using namespace std;

void displayA(int A[], int N) {
	for (int i = 0; i < N - 1; i++)
		cout << A[i] << " ";
	cout << A[N-1] << endl;
}

void insertionSort(int A[], int N) {
	for (int i = 1; i < N; i++) {
		displayA(A, N);
		int v = A[i];
		int j = i - 1;
		while (0 <= j && v < A[j]) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
	}
	displayA(A, N);
}

int main() {
	int N;
	int A[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	insertionSort(A, N);


	return 0;
}