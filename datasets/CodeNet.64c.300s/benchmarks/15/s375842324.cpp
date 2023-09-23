#include<iostream>
using namespace std;

int selectionSort(int A[], int N){
	int swap_cnt = 0, min_id, tmp;
	for (int i=0; i<N; i++){
		min_id = i;
		for (int j=i+1; j<N; j++){
			if (A[j] < A[min_id]) min_id = j;
		}
		if (min_id != i){
			tmp = A[min_id];
			A[min_id] = A[i];
			A[i] = tmp;
			swap_cnt++;
		}
	}
	return swap_cnt;
}

int main(){
	int A[100], N, swap_cnt;
	cin >> N;
	for (int i=0; i<N; i++) cin >> A[i];

	swap_cnt = selectionSort(A,N);

	for (int i=0; i<N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << swap_cnt << endl;
	return 0;
}