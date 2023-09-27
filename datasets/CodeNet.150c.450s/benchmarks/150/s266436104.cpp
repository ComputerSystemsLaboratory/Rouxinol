#include <iostream>

void countingSort(int* A, int* B, int n)
{
	int C[10001];
	for (int i=0; i<10001; i++) C[i] = 0;
	for (int j=0; j<n; j++) C[A[j]]++;
	for (int i=1; i<10001; i++) C[i] += C[i-1];
	for (int j=n-1; j>=0; j--) {
		B[C[A[j]]-1] = A[j];
		C[A[j]]--;
	}
}

int main()
{
	int n;
	std::cin >> n;
	
	int *A = new int[n];
	for (int i=0; i<n; i++) std::cin >> A[i];
	
	int *B = new int[n];
	countingSort(A, B, n);
	
	std::cout << B[0];
	for (int i=1; i<n; i++) std::cout << " " << B[i];
	std::cout << std::endl;
	
	delete[] A;
	delete[] B;
	
	return 0;
}


