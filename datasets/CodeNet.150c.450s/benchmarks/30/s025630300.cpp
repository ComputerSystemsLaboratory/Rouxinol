#include <iostream>

using namespace std;

int selectionSort(int A[], int N)
{
	int k = 0;

	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j] < A[minj])
				minj = j;
		}
		int t = A[i];
		A[i] = A[minj];
		A[minj] = t;
		if (i != minj) k++;
	}

	return k;
}

int main()
{
	const int MAX = 100;
	int A[MAX], N, k;

	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> A[i];

	k = selectionSort(A, N);

	for (int i = 0; i < N; i++) {
		if (i) cout << ' ';
		cout << A[i];
	}
	cout << '\n';

	cout << k << endl;
}