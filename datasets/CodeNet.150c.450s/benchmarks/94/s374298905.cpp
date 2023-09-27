#include<iostream>
using namespace std;

void show(int*A, int N);

int bubblesort(int* A, int N) {
	int flag = 1;
	int Count = 0;

	while (flag) {
		flag = 0;
		

		for (int i = N - 1; i > 0; --i) {
			if (A[i] < A[i - 1]) {
				int Case = A[i - 1];
				A[i - 1] = A[i];
				A[i] = Case;
				++Count;
				flag = 1;
			}
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
	int s = bubblesort(A, N);
	show(A, N);
	cout << s << endl;


	delete[] A;

}
