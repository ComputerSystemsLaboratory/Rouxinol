#include <iostream>

using namespace std;

void showArray(int A[], int N){
	for (int p = 0; p < N - 1; p++){
		cout << A[p] << " ";
	}
	cout << A[N - 1] << endl;
}

void bubbleSort(int A[], int N){
	int counter = 0;

	for (int i = 0; i < N; i++){
		for (int j = N - 1; j > 0; j--){
			if (A[j] < A[j - 1]){
				int temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
				counter++;
			}
		}
	}
	showArray(A, N);
	cout << counter << endl;
}

int main(){
	int N;
	int A[100];

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	bubbleSort(A, N);

	return 0;
}