#include <iostream>
using namespace std;

static const int MAX = 100;

void selectionSort(int A[], int N)
{
	int tmp, count = 0;

	for (int i=0; i < N; i++) {
		int minj = i;
		for (int j=i; j < N; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
		if (i != minj) count++;
	}
	for (int i=0; i < N; i++) {
		if (i != N-1) cout << A[i] << " ";
		else cout << A[i] << endl;
	}
	cout << count << endl;
}

int main()
{
	int N, A[MAX];

	cin >> N;
	for (int i=0; i < N; i++) cin >> A[i];
	selectionSort(A, N);
	return 0;
}