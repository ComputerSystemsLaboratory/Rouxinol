#include <iostream>

using namespace std;

void insertionSort(int A[], int N){
	int key;
	
	for (int p = 0; p < N - 1; p++){
		cout << A[p] << " ";
	}
	cout << A[N - 1] << endl;

	for (int i = 1; i < N; i++){
		key = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > key){
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = key;
		for (int p = 0; p < N - 1; p++){
			cout << A[p] << " ";
		}
		cout << A[N - 1] << endl;
	}
}

int main(){

	int N;
	int A[100];

	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	insertionSort(A, N);

	return 0;
}