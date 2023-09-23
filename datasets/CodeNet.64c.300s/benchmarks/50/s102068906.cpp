#include <iostream>

using namespace std;

int main() {
	int N, A[100], count, flag, x;
	count = 0;
	flag = 1;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> A[i];
	}

	while (flag) {
		flag = 0;
		for (int j = N - 1;j >= 1;j--) {
			if (A[j] < A[j - 1]) {
				x = A[j];
				A[j] = A[j - 1];
				A[j - 1] = x;
				flag = 1;
				count++;
			}
		}
	}

	for (int i = 0;i < N-1;i++) {
		cout << A[i]<<" ";
	}
	cout << A[N-1] << endl;
	cout << count << endl;
}