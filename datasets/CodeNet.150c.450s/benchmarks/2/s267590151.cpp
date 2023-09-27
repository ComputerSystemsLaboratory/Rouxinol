#include <iostream>
#include <cstdio>

using namespace std;

int partition(int A[],int p,int r)
{
	int x = A[r];
	int i = p - 1;

	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			i++;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}

	int tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;

	return i + 1;
}

int main(void)
{
	int A[100000];
	int n;
	int q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	q = partition(A, 0, n - 1);

	for (int i = 0; i < n; i++) {

		if (i > 0) {
			putchar(' ');
		}

		if (i == q) {
			cout << '[' << A[i] << ']';
		}
		else {
			cout << A[i];
		}
	}

	putchar('\n');

	return 0;
}