#include <iostream>
using namespace std;
void insertion_sort(int A[],int N) {
	for (int i = 1; i < N; i++) {
		int v = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		for (int k = 0; k < N-1; k++) {
			cout << A[k] << " ";
		}
		cout << A[N - 1] << endl;;
	}
}
int main()
{
	int N;
	int a[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N - 1; i++) {
		cout << a[i] << " ";
	}
	cout << a[N - 1] << endl;
	insertion_sort(a, N);
	return 0;
}
