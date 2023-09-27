#include<iostream>
using namespace std;

int selectionSort(int, int[]);

int main(void){
	static int A[100];
	int N;
	cin >> N;

	for (int i = 0; i < N; i++){
		cin >> A[i];
	}

	int ans = selectionSort(N, A);
	for (int i = 0; i < N; i++){
		if (i){
			cout << " ";
		}
		cout << A[i];
	}
	cout << endl;

	cout << ans << endl;
	return 0;
}

int selectionSort(int N, int A[]){
	int ans = 0;

	for (int i = 0; i < N; i++){
		int minj = i;
		for (int j = i; j < N; j++){
			if (A[minj]>A[j]){
				minj = j;
			}
		}
		if (minj != i){
			swap(A[minj], A[i]);
			ans++;
		}
	}
	return ans;
}