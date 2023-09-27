#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int C[10000];
int n;

void CountingSort(int A[], int B[], int k) {

	for (int i = 0; i <= k; ++i) {
		C[i] = 0;
	}

	for (int j = 1; j <= n; ++j) {
		/* C[i] ??? i ???????????°????¨?????????? */
		C[A[j]]++;
	}

	/* C[i] ??? i ??\????????°???????????°????¨??????????*/
	for (int i = 1; i <= k; ++i) {
		C[i] = C[i] + C[i - 1];
	}

	for (int j = n; j > 0; --j) {
		B[C[A[j]]] = A[j];
		C[A[j]]--;
	}

}

int main() {

	scanf("%d", &n);

	int A[n];
	int B[n];

	int k = 0;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &A[i]);
		if (A[i] > k) {
			k = A[i];
		}
	}

	CountingSort(A, B, k);

	for (int i = 1; i <= n; ++i) {
		if (i != 1) {
			cout << " ";
		}
		cout << B[i];
	}
	cout << endl;

	return 0;
}