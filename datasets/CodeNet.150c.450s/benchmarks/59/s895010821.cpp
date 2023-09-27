#include <iostream>

using namespace std;
void insertsort(int *A, int N);
void insertsort(int *A, int N) {
	int v, j;
	for (int i = 1; i <= N; i++) {
		cout << A[0];
		for (int k = 1; k < N; k++) {
			cout << " " << A[k];
		}
		cout << endl;
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
	}
}

int main() {
	int N;
	int A[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	insertsort(A, N);

	return 0;
}