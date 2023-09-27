#include <iostream>
using namespace std;

static const int MAX = 100;

void bubbleSort(int A[], int N)
{
	int tmp;
	int count = 0;
	for (int i=0; i < N; i++) {
		for (int j=N-1; j > i; j--) {
			if (A[j] < A[j-1]) {
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				count++;
			}
		}
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
	bubbleSort(A, N);
	return 0;
}