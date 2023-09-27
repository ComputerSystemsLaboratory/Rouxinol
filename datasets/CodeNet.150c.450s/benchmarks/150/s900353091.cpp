#include <iostream>
#include <cstdio>

using namespace std;

#define A_MAX 10000
#define N_MAX 2000000
int A[N_MAX];
int B[N_MAX];

void countingSort(int A[],int B[],int k,int n) {

	int *C = new int[k+1];

	for (int i = 0; i <= k; i++) {
		C[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		C[A[i]]++;
	}

	for (int i = 1; i <= k; i++) {
		C[i] += C[i - 1];
	}

	for (int i = n; i >= 1; i--){
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}

	delete[] C;

}

int main(void)
{
	int n;

	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}

	countingSort(A, B, A_MAX, n);

	for (int i = 1; i <= n; i++) {
		if (i>1)putchar(' ');
		cout << B[i];
	}

	putchar('\n');

}