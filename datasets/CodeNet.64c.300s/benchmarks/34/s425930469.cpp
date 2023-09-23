#include <iostream>
using namespace std;

void Show(int *A,int N) {
	for (int i = 0;i < N-1;i++)
		cout << A[i] << " ";
	cout << A[N-1]<<endl;
}

int main()
{
	int N, v, j, A[100];
	cin >> N;

	for (int i = 0;i < N;i++)
		cin >> A[i];

	Show(A, N);

	for (int i = 1;i < N;i++) {
		v = A[i];
		j = i - 1;
		while (A[j] > v && j >= 0) {
			A[j + 1] = A[j];
			j--;
		}
		A[j+1] = v;
		Show(A, N);
	}
}