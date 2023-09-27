#include<iostream>
using namespace std;

void bubbleSort(int A[], int N);

int main() {
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	bubbleSort(A, N);
	return 0;
}

void bubbleSort(int A[], int N) {
	int flag = 1;
	int cnt = 0;
	while (flag) {
		flag = 0;
		for (int i = N-1; i > 0; i--) {
			if (A[i] < A[i-1]) {
				int v = A[i];
				A[i] = A[i-1];
				A[i-1] = v;
				flag = 1;
				cnt++;
			}
		}
	}
	for (int i = 0; i <N-1; i++) {
		cout << A[i] << " ";
	}
	cout << A[N-1] << endl;
	cout << cnt << endl;
}