#include <iostream>
using namespace std;
static int N_MAX = 100;

void p(int A[], int N) {
	for (int i = 0; i < N; ++i) {
		if (i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
}

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

int selectionSort(int A[], int N) {
	int count = 0;
	for (int i = 0; i < N; ++i) {
		int minj = i;
		for (int j = i; j < N; ++j)
			if (A[j] < A[minj])	minj = j;
		if (minj != i) {
			swap(A[i], A[minj]);
			++count;
		}
	}
	return count;
}

int main() {
	int N;
	int A[N_MAX];
	cin >> N;
	for (int i = 0; i < N; ++i) cin >> A[i];

	int count = selectionSort(A, N);
	p(A, N);
	cout << count << endl;
}