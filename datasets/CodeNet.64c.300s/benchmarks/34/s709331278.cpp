
#include <iostream>
using namespace std;

void insertionSort(int* A, int N);

int main()
{
	int n;
	int* a;

	cin >> n;

	a = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	insertionSort(a, n);

	delete[] a;
}

void insertionSort(int* A, int N)
{
	for (int i = 0; i < N; ++i) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		for (int k = 0; k < N; ++k) {
			cout << A[k];
			if (k != N - 1) { cout << ' '; }
		}
		cout << endl;
	}
}