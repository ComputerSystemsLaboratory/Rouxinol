#include<iostream>
using namespace std;

void bubbleSort(int A[], int N){
	int swap_cnt=0, flag, tmp;
	flag = 1;
	while (flag){
		flag = 0;
		for (int i=N-1; i>0; i--){
			if (A[i] < A[i-1]){
				tmp = A[i-1];
				A[i-1] = A[i];
				A[i] = tmp;
				flag = 1;
				swap_cnt++;
			}
		}
	}
	for (int i=0; i<N; i++){
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << swap_cnt << endl;
}

int main(){
	int N, A[100];

	cin >> N;
	for (int i=0; i<N; i++) cin >> A[i];

	bubbleSort(A, N);
}