#include<iostream>
using namespace std;

int selectionSort(int A[], int N) {
	int sw = 0;
	for (int i = 0; i < N; i++) {
		int imin = i;
		for (int j = i + 1; j < N; j++) {
			if (A[imin] > A[j]) imin = j;
		}
		if (imin != i) {
			swap(A[imin], A[i]);
			sw++;
		}
	}
	return sw;
}
			
	
int main() {
	int N, sw;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	sw = selectionSort(A, N);
	
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << sw << endl;
	
	return 0;
}