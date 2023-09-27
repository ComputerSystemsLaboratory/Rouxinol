#include<iostream>
using namespace std;

void show(int* A, int N);

int selectionSort(int* A, int N) {
	int Count = 0;
	for (int i = 0; i < N; ++i) {
		int minj = i;
		for (int j = i; j < N ; ++j) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		if (minj != i) {
			int C = A[i];
			A[i] = A[minj];
			A[minj] = C;
			++Count;
		}
		
	}
	return Count;
}

void show(int* A, int N) {
	for (int i = 0; i < N; ++i) {
		if (i > 0) { cout << ' '; }
		cout << A[i];
	}
	cout << endl;
}

int main() {
	int N;
	cin >> N;

	int* A = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	int Count = selectionSort(A, N);

	show(A, N);

	cout << Count << endl;

	delete[] A;
}
