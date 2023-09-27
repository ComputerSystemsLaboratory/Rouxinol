#include <iostream>
using namespace std;

static int bubbleSort(int *A, int N){
	int temp, count=0;
	bool flag;
	do{
		flag = false;
		for (int j = N - 1; j >= 1; j--){
			if (A[j] < A[j - 1]){
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
				count++;
				flag = true;
			}
		}
	} while (flag);

	return count;
}

int main(void){
	int N, *A, count;

	cin >> N;

	A = new int[N];

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	count = bubbleSort(A, N);

	for (int i = 0; i < N; i++){
		cout << A[i];
		if (i != N - 1){
			cout << " ";
		}
	}

	cout << "\n" << count <<"\n";

	return 0;
}