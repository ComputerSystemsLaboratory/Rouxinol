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
	bool flag = 1;
	int v,count;
	count = 0;
	while (flag) {
		flag = 0;
		for (int j = N-1; 0<j; j--) {
			if (A[j] < A[j - 1]) {
				v = A[j];
				A[j] = A[j - 1];
				A[j - 1] = v;
				flag = 1;
				count++;
			}
		}
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