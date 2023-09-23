//???????????????
#include <iostream>
using namespace std;

static int selectionSort(int *A, int N){
	int minj, temp, count=0;
	for (int i = 0; i < N; i++){
		minj = i;
		for (int j = i+1; j < N; j++){
			if (A[j] < A[minj]){
				minj = j;
			}
		}

		if (minj != i){
			temp = A[i];
			A[i] = A[minj];
			A[minj] = temp;
			count++;
		}
	}

	return count;
}

int main(void){
	int N, *A, count;

	cin >> N;

	A = new int[N];

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	count = selectionSort(A, N);

	for (int i = 0; i < N; i++){
		cout << A[i];
		if (i != N - 1){
			cout << " ";
		}
	}

	cout << "\n" << count << "\n";

	return 0;
}