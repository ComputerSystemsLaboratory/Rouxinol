#include<iostream>
using namespace std;


int SelectionSort(int A[], int N) {
	int minj;
	int sw = 0;
	for (int i = 0;i < N;i++) {
		minj = i;
		for (int j = i;j < N;j++)
			if (A[j] < A[minj])
				minj = j;
		if (A[minj] < A[i]) {
			swap(A[i], A[minj]);
			sw++;
		}
	}
	return sw;
}
void trace(int A[], int N) {
	int i;
	for (i = 0;i < N;i++) {
		if (i > 0) cout << " ";/*隣接する要素の間に1つの空白を出力*/
		cout <<A[i];
	}
	cout << endl;
}
int main() {
	int N,sw;
	cin >> N;
	int A[100];
	for (int i = 0;i < N;i++)cin >> A[i];
	sw = SelectionSort(A, N);
	trace(A, N);
	cout << sw << endl;



}
