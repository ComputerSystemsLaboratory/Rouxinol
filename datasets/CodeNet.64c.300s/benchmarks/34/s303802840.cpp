#include <iostream>

using namespace std;

void insertionSort(int A[], int N) {
	int v, j;
	for (int i = 1; i <= N - 1; i++) {
		v = A[i];
		j = i - 1;
		
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
			A[j + 1] = v;
		}

		for (int i = 0; i < N - 1; i++) {
			cout << A[i] << " ";
		}
		cout << A[N - 1] << endl;
	}
}

int main()
{
	const int MAX = 100;
	int A[MAX], N;

	cin >> N;

	for (int i = 0; i < N; i++) cin >> A[i];

	for (int i = 0; i < N - 1; i++) {
			cout << A[i] << " ";
		}
	cout << A[N - 1] << endl;

	insertionSort(A, N);
}