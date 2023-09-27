#include<iostream>
using namespace std;

// ??????????????????

int BubbleSort(int A[], int N){
	int move = 0;
	bool flag = 1;

	for (int i = 0; flag; i++){
		flag = 0;
		for (int j = N - 1; j >= i + 1; j--){
			if (A[j] < A[j - 1]){
				swap(A[j], A[j - 1]);
				flag = 1;
				move++;
			}
		}
	}

	return move;
}

int main(){

	int N;
	int A[100];
	int move = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	move = BubbleSort(A, N);
	
	for (int i = 0; i < N; i++){
		if (i) cout << ' ';
		cout << A[i];
	}

	cout << endl;
	cout << move << endl;

	return 0;
	
}