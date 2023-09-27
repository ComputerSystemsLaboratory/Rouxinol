#include <iostream>
using namespace std;

void displayA(int A[], int N) {
	for (int i = 0; i < N - 1; i++)
		cout << A[i] << " ";
	cout << A[N - 1] << endl;
}


int selectionSort(int A[], int N) {
	int num_of_exchange = 0;
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		if(i!=minj){
			int temp = A[i];
			A[i] = A[minj];
			A[minj] = temp;
			num_of_exchange++;
		}
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

	int num_of_exchange = selectionSort(A, N);

	displayA(A, N);

	cout << num_of_exchange << endl;

	return 0;
}