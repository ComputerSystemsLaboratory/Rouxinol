#include <iostream>
using namespace std;

void displayA(int A[], int N) {
	for (int i = 0; i < N - 1; i++)
		cout << A[i] << " ";
	cout << A[N - 1] << endl;
}

//int bubbleSort(int A[], int N) {
//	bool flag = true;
//	int num_of_exchange = 0;
//	while (flag) {
//		flag = false;
//		for (int j = N - 1; j >= 1; j--) {
//			if (A[j - 1] > A[j]) {
//				int temp = A[j];
//				A[j] = A[j - 1];
//				A[j - 1] = temp;
//				flag = true;
//				num_of_exchange++;
//			}
//		}
//	}
//	return num_of_exchange;
//}

int bubbleSort(int A[], int N) {
	bool flag = true;
	int num_of_exchange = 0;
	int i = 1;
	while (flag) {
		flag = false;
		for (int j = N - 1; j >= i; j--) {
			if (A[j - 1] > A[j]) {
				int temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				flag = true;
				num_of_exchange++;
			}
		}
		i++;
	}
	return num_of_exchange;
}

int main() {
	int N;
	int A[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int num_of_exchange = bubbleSort(A, N);
	
	displayA(A, N);
	
	cout << num_of_exchange << endl;

	return 0;
}