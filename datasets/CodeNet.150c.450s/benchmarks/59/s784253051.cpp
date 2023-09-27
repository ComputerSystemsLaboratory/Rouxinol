#include<iostream>

using namespace std;

int main() {
	int N;
	int A[1000];
	cin >> N;

	auto print = [&A, N]() {
		for (int i = 0; i < N; ++i) {
			cout << A[i];
			if (i < N - 1) {
				cout << ' ';
			}
			else {
				cout << endl;
			}
		}
	};

	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	print();

	for (int i = 1; i < N; ++i) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		print();
	}
	return 0;
}