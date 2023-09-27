#include <iostream>

using namespace std;

void bubbleSort(int A[], int N)
{
	int flag = 1, k = 0;
	while (flag) {
		flag = 0;
		int i = 0;
		for (int j = N - 1; j > i; j--) {
			if (A[j] < A[j - 1]) {
				int t = A[j - 1];
				A[j - 1] = A[j];
				A[j] = t;
				flag = 1;
				k++;
			}
		}
		i++;
	}

	for (int i = 0; i < N - 1; i++) {
		cout << A[i] << " ";
	}
	cout << A[N - 1] << endl;

	cout << k << endl;
}


int main()
{
	const int MAX = 100;
	int A[MAX], N;

	cin >> N;

	for (int i = 0; i < N; i++) cin >> A[i];

	bubbleSort(A, N);
}