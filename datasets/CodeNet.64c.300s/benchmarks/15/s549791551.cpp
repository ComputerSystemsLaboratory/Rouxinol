#include<cstdio>
#include<iostream>
#include<cctype>
#include<algorithm>
using namespace std;

void trace(int A[], int N)
{
	cout << A[0];
	for (int i = 1; i < N; i++)
	{
		cout << " " << A[i];
	}
	cout << endl;

	return;
}

void BubbleSort(int N, int A[]) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		int minj = i;
		for (int j = i; j < N; j++) {
			if (A[j] < A[minj])minj = j;
		}
		if (A[minj] != A[i])count++;
		swap(A[minj], A[i]);
	}
	trace(A, N);
	cout << count << endl;
	}


int main() {
	int N;
	cin >> N;
	int A[100];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	BubbleSort(N, A);
	return 0;
}